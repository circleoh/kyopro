//https://www.acmicpc.net/problem/10844

#include <cstdio>
long ans[101][11];

int main()
{
  int c;
  long sum=0;
  scanf("%d", &c);
  
  for (int i=1; i<10; ++i) ans[1][i] = 1;
  for (int i=2; i<=c; ++i) {
    ans[i][0] = ans[i-1][1];
    for (int j=1; j<= 9; ++j) { //ans[][10] = 0
      ans[i][j] = (ans[i-1][j-1] + ans[i-1][j+1]) % 1000000000;
    }
  }
  
  for (int i=0; i<10; ++i) sum += (ans[c][i] % 1000000000);
  printf("%ld", sum % 1000000000);
}