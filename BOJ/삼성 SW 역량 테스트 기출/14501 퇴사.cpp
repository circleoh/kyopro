//https://www.acmicpc.net/problem/14501

#include <cstdio>
#include <algorithm>
using namespace std;
int c, t[20], p[20], dp[20]={0};

void run() {
    int ans=0;
    for (int i=0; i<c; ++i) {
        if (i+t[i] <= c) {
            dp[i+t[i]] = max(dp[i+t[i]], dp[i]+p[i]);
            ans = max(ans, dp[i+t[i]]);
        }
        dp[i+1] = max(dp[i], dp[i+1]);
        ans = max(ans, dp[i+1]);
    }
    printf("%d", ans);
}

int main() {
    scanf("%d", &c);
    for (int i=0; i<c; ++i) scanf("%d %d", t+i, p+i);
    run();
}