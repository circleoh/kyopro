//https://www.acmicpc.net/problem/14956

#include <iostream>
#include <vector>

using namespace std;
int N, M;

void comp(int n, int m, int sx=1, int sy=1, vector <int> order={0, 2, 3, 1}) {
    int h = n/2, k = h*h;
    if (m < 1 || m > n*n) return;
    if (n == 1) { printf("%d %d\n", sx, sy); return; }
    comp(h, m, sx+(order[0]&1)*h, sy+(order[0]&2)/2*h, {order[0], order[3], order[2], order[1]});
    comp(h, m-k, sx+(order[1]&1)*h, sy+(order[1]&2)/2*h, order);
    comp(h, m-k*2, sx+(order[2]&1)*h, sy+(order[2]&2)/2*h, order);
    comp(h, m-k*3, sx+(order[3]&1)*h, sy+(order[3]&2)/2*h, {order[2], order[1], order[0], order[3]});
}

int main() {
    scanf("%d%d", &N, &M);
    comp(N, M);
}