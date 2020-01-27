//https://www.acmicpc.net/problem/15552

#include <cstdio>

int n, a, b;
int main(void){
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }
}