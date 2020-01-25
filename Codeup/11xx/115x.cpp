//-------------------------------------1150-------------------------------------//
#include <cstdio>

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  b = a>b ? b : a;
  printf("%d", (b>c ? c : b));
}

//-------------------------------------1151-------------------------------------//
#include <cstdio>

int main()
{
  int a;
  scanf("%d", &a);
  if(a<10) printf("small");
}

//-------------------------------------1152-------------------------------------//
#include <cstdio>

int main()
{
  int a;
  scanf("%d", &a);
  if(a<10) printf("small");
  else printf("big");
}

//-------------------------------------1153-------------------------------------//
#include <cstdio>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  if(a<b) printf("<");
  else if(a>b) printf(">");
  else printf("=");
}

//-------------------------------------1154-------------------------------------//
#include <cstdio>
#define ABS(X) (X>0 ? X : -X)

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", ABS((a-b)));
}

//-------------------------------------1155-------------------------------------//
#include <cstdio>

int main()
{
  int a;
  scanf("%d", &a);
  if(a%7==0) printf("multiple");
  else printf("not multiple");
}

//-------------------------------------1156-------------------------------------//
#include <cstdio>

int main()
{
  int a;
  const char *str[2]{"even", "odd"};
  scanf("%d", &a);
  printf("%s", str[a%2]);
}

//-------------------------------------1157-------------------------------------//
#include <cstdio>

int main()
{
  double a;
  scanf("%lf", &a);
  if(a >= 50 && a <= 60) printf("win");
  else printf("lose");
}

//-------------------------------------1158-------------------------------------//
#include <cstdio>

int main()
{
  int a;
  scanf("%d", &a);
  if((a >= 30 && a <= 40) || (a >= 60 && a <= 70)) printf("win");
  else printf("lose");
}

//-------------------------------------1159-------------------------------------//
#include <cstdio>
#define SIX(X) (X%6==0 ? 1 : 0)

int main()
{
  int a;
  scanf("%d", &a);
  if((a >= 50 && a <= 70) || (SIX(a))) printf("win");
  else printf("lose");
}