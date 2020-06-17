//https://www.acmicpc.net/problem/1463

#include <cstdio>
#define MIN(X, Y) (X<Y ? X : Y)

int arr[1000000];
int n;

int solve(int num)
{
  arr[1] = 0; arr[2] = 1; arr[3] = 1;
  if (num == 1 || num == 2 || num == 3) return arr[num];
  for (int i=4; i<=num; ++i) {
    arr[i] = arr[i-1]+1;
    if (!(i%2)) arr[i] = MIN(arr[i], arr[i/2] + 1);
    if (!(i%3)) arr[i] = MIN(arr[i], arr[i/3] + 1);
  }
  return arr[num];
} 

int main()
{
  int c;
  scanf("%d", &c);
  printf("%d", solve(c));
}