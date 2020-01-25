//-------------------------------------1120-------------------------------------//
#include <cstdio>

int main() 
{
  int arr[3];
  for(int i=0; i<3; ++i) scanf("%d", &arr[i]);
  printf("%.2f", (arr[0]+arr[1]+arr[2])/3.0);
}

//-------------------------------------1121-------------------------------------//
#include <cstdio>

int main() 
{
  int n, m;
  scanf("%d %d", &n, &m);
  printf("%d", n%m);
}

//-------------------------------------1122-------------------------------------//
#include <cstdio>

int main() 
{
  int min;
  scanf("%d", &min);
  printf("%d %d", min/60, min%60);
}

//-------------------------------------1123-------------------------------------//
#include <cstdio>

int main() 
{
  int temp;
  scanf("%d", &temp);
  printf("%.3f", 1.8 * temp + 32.0);
}

//-------------------------------------1124-------------------------------------//
#include <bits/stdc++.h>

int main() 
{
  char name[20]; int a, c=0, h=0;
  scanf("%s", name);

  for(int i=1; i<strlen(name); ++i) {
    if(name[i] == 'H') {
      a = i; break;
    }
  }
  c+=atoi(&name[1]);
  h+=atoi(&name[a+1]);
  printf("%d", c*12+h);
}

//-------------------------------------1125-------------------------------------//
#include <cstdio>

int main() 
{
  int a;
  scanf("%d", &a);
  printf("%o %X", a, a);
}

//-------------------------------------1126-------------------------------------//
#include <cstdio>

int main() 
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d + %d = %d\n", a, b, a+b);
  printf("%d - %d = %d\n", a, b, a-b);
  printf("%d * %d = %d\n", a, b, a*b);
  printf("%d / %d = %d\n", a, b, a/b);
  printf("%d %% %d = %d\n", a, b, a%b);
}

//-------------------------------------1127-------------------------------------//
#include <cstdio>

int main() 
{
  double per[3]; int score[3]; double sum=0;
  for(int i=0; i<3; ++i) {
    scanf("%lf %d", &per[i], &score[i]);
    sum += per[i] * score[i];
  }
  printf("%.1f", sum);
}

//-------------------------------------1128-------------------------------------//
#include <cstdio>

int main() 
{
  int a;
  scanf("%d", &a);
  printf("%lld", a * 123456789LL);
}