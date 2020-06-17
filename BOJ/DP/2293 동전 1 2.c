#include <stdio.h>

int main() {
    int n, k;
    int cost[101], dp[10001] = {1,};
    scanf("%d %d", &n, &k);
    for (int i=1; i<=n; ++i) scanf("%d", cost+i);
    
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=k; ++j) {
            if (j >= cost[i]) dp[j] += dp[j-cost[i]];
        }
    }
    printf("%d", dp[k]);
}