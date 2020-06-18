/////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int, int>
#define vi vector<int>
#define vpi vector<pair<int, int> >
#define si stack<int>
#define pb push_back
#define mp make_pair
#define endl "\n"
#define FOR(i, START, END) for (int i = START; i < END; ++i)
#define FORD(i, START, END) for (int i = START; i >= END; --i)
#define VAR(i, n) __typeof(n) i = (n)
#define FOREACH(i, CONT) for (VAR(i, (CONT).begin()); i != (CONT).end(); ++i)
#define FOREACHD(i, CONT) for (VAR(i, (CONT).rbegin()); i != (CONT).rend(); ++i)
#define REP(i, n) FOR(i, 0, n)
#define CLR(a, x) memset(a, x, sizeof(a))
#define SIZE(x) ((int)x.size())
#define ld long double
constexpr int INF = 1000000009;
constexpr long long INFLL = (ll)INF * (ll)INF;
constexpr ld EPS = 10e-9;

//reading and printing
template<typename T>
void read(T& a) {cin >> a;}
template<typename T>
void read(vector<T>& v, int n) {int tmp; REP(i, n) {read(tmp); v.pb(tmp);};}
template<typename T, typename V>
void read(pair<T, V>& p) {read(p.first); read(p.second);}
template<typename T>
void println(const T& a) {cout << a << "\n";}
void println(const char *s) {printf("%s\n", s);}
template<typename T>
void print(const T& a) {cout << a << " ";}
template<typename T>
void println(const vector<T>& v) {for (const auto &i : v) print(i); cout << "\n";}
template<typename T>
void print(const vector<T>& v) {for (const auto &i : v) print(i); cout << " ";}
template<typename T, typename V>
void println(const pair<T, V>& p) {print(p.first); println(p.second);}
template<typename T, typename V>
void print(const pair<T, V>& p) {print(p.first); print(p.second);}
/////////////////////////////////////////////////////////////////////////
