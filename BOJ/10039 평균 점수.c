#include <stdio.h>

int main(){
  int sum=0, i, num;
  for (; i<5; i++) {
    scanf("%d", &num);
    (num < 40) ? (sum += 40) : (sum += num);
  }
  printf("%d", sum/5);
}