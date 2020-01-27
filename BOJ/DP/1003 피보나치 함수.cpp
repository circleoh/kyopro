//https://www.acmicpc.net/problem/1003

#include <bits/stdc++.h>

int fibo[41] = {1, 0, 1,};

int fibonacci(int n)
{
  if (n == 1 || n == 0 || fibo[n] != 0) return fibo[n];
  fibo[n] = fibonacci(n-1) + fibonacci(n-2);
  return fibo[n];
}

int main()
{
  int c;
  scanf("%d", &c);
  int *arr = new int[c];
  for (int i=0; i<c; ++i) {
    scanf("%d", &arr[i]);
  }
  
  for (int i=0; i<c; ++i) {
    printf("%d %d\n", fibonacci(arr[i]), fibonacci(arr[i]+1));
  }
  delete[] arr;
}