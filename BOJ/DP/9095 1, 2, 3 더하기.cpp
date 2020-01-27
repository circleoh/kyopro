//https://www.acmicpc.net/problem/9095

#include <cstdio>
int arr[9] = {1, 2, 4, 0,};

int solve(int num)
{
  if(num >= 1 && num <= 3) return arr[num-1];
  for(int i=3; i<num; ++i) {
    arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
  }
  return arr[num-1];
} 

int main()
{
  int c;
  scanf("%d", &c);
  int *arr = new int[c];
  for(int i=0; i<c; ++i) {
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<c; ++i) printf("%d\n", solve(arr[i]));
}