#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int i, j, n, t; scanf("%d", &t);
    while (t>0) {
        int d[2][100001], a[2][100001];
        scanf("%d", &n);

        for (i = 0; i <= 1; ++i)
            for (j = 1; j <= n; ++j)
                scanf("%d", &a[i][j]);
        
        d[0][0] = d[1][0] = 0;
        d[0][1] = a[0][1]; d[1][1] = a[1][1];
        
        for (i = 2; i <= n; i++) {
            d[0][i] = max(d[1][i - 1], d[1][i - 2]) + a[0][i];
            d[1][i] = max(d[0][i - 1], d[0][i - 2]) + a[1][i];
        }
        
        printf("%d\n",max(d[0][n], d[1][n]));
        --t;
    }
}
