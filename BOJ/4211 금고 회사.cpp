#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct {
  int x, y;
} Point;

class Sheet {
private:
  vector<Point> posMir, negMir;
  int r, c;

public:
  Sheet();
  int getR() {return r;}
  int getC() {return c;}
  int isOccupied(Point p);

};

class Light {
private:
  int r, c, rdir, cdir, status;

public:
  Light(int r, int c, int rdir, int cdir): r(r), c(c), rdir(rdir), cdir(cdir), status(0) {}
  int getR() { return r; }
  int getC() { return c; }
  void move(Sheet &s);
  Point getPos();
  void showPos();
};

// ###################### Implementation ########################

Sheet::Sheet() {
  int m, n, a, b;
  cin >> r >> c >> m >> n;
  for (int i=0; i<m; ++i) {
    cin >> a >> b;
    Point p = {a, b};
    posMir.push_back(p);
  }

  for (int i=0; i<n; ++i) {
    cin >> a >> b;
    Point p = {a, b};
    negMir.push_back(p);
  }
}

int Sheet::isOccupied(Point p) { //1 for posMir, -1 for negMir, 0 for none
  for (auto i: posMir) if (i.x == p.x && i.y == p.y) return 1;
  for (auto i: negMir) if (i.x == p.x && i.y == p.y) return -1;
  return 0;
}

Point Light::getPos() {
  Point p = {r, c};
  return p;
}
void Light::move(Sheet &sh) {
  r += rdir; c += cdir;
  status = sh.isOccupied(getPos());

  switch (status) {
  case 1: // posMir
    if (rdir == 0) {
      rdir = -1 * cdir; cdir = 0;
    } else if (cdir == 0) {
      cdir = -1 * rdir; rdir = 0;
    } return;

  case -1: // negMir
    swap(rdir, cdir);
    return;
  }
}

void Light::showPos() {
  cout << "(" << r << ", " << c << ")";
}

inline int equal(Point p1, Point p2, int flag=0) {
  if (flag == 1) //neq
    return !(p1.x == p2.x && p1.y == p2.y);
  return p1.x == p2.x && p1.y == p2.y;
}

int run(int caseNum) {
  Sheet sh;
  Light go(1, 1, 0, 1);
  Light come(sh.getR(), sh.getC(), 0, -1);
  vector<Point> goPath;
  vector<Point> comePath;
  int cnt = 1;

  while (1) {
    if (cnt < 2 * sh.getC() * sh.getR()) {
      goPath.push_back({go.getR(), go.getC()});
      go.move(sh);
      if (! (equal({go.getR(), go.getC()}, {sh.getR(), sh.getC()}, 1) &&\
      go.getR() > 0 && go.getR() < sh.getR()+1 &&\
      go.getC() > 0 && go.getC() < sh.getC()+1 )) {
        goPath.push_back({go.getR(), go.getC()});
        break;
      }
    } else break;
  }

  for (auto i: goPath) {
    if (equal(i, {sh.getR(), sh.getC()})) {
      cout << "Case " << caseNum << ": 0\n";
      return 0;
    }
  }

  while (1) {
    if (cnt < 2 * sh.getC() * sh.getR()) {
      comePath.push_back({come.getR(), come.getC()});
      come.move(sh);
      if (! (equal({come.getR(), come.getC()}, {1, 1}, 1) &&\
      come.getR() > 0 && come.getR() < sh.getR()+1 &&\
      come.getC() > 0 && come.getC() < sh.getC()+1 )) {
        comePath.push_back({come.getR(), come.getC()});
        break;
      }
    } else break;
  }

  vector<Point> ls;
  for (auto i: goPath) {
    for (auto j: comePath) {
      if (equal(i, j)) {
        ls.push_back(i);
      }
    }
  }

  if (ls.size() == 0) {
    cout << "Case " << caseNum << ": impossible\n";
    return 0;
  }
  
  cout << "Case " << caseNum << ": " << ls.size() << " " << ls[0].x << " " << ls[0].y << '\n';
  return 0;
}


int main() {
  cin.tie(NULL); ios::sync_with_stdio(false);
  int cnt = 1;
  while (1) {
    run(cnt);
    ++cnt;
  }
  return 0;
}
