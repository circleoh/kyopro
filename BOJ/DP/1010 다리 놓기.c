//https://www.acmicpc.net/problem/1010

#include <stdio.h>

long dp[30][30]={{0,},};
long run(int n, int m) {
    for (int i=1; i<=n; ++i) { dp[i][1] = i; dp[i][0] = 1; }
    
    for (int i=2; i<=n; ++i)
        for (int j=2; j<=i; ++j)
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1];

    return dp[n][m];
}

int main(int argc, const char *argv[]) {
    int c, n, m; scanf("%d", &c);
    for (int i=0; i<c; ++i) {
        scanf("%d %d", &n, &m);
        printf("%ld\n", run(m, n));
    }
    return 0;
}