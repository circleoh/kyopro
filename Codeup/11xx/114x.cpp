//-------------------------------------1140-------------------------------------//
#include <cstdio>

int main() 
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", a+b==0 ? 0 : 1);
}

//-------------------------------------1143-------------------------------------//
#include <cstdio>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", a&b);
}

//-------------------------------------1144-------------------------------------//
#include <cstdio>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", a|b);
}

//-------------------------------------1147-------------------------------------//
#include <cstdio>

int main()
{
  int a, x;
  scanf("%d %d", &a, &x);
  printf("%d", a<<x);
}

//-------------------------------------1148-------------------------------------//
#include <cstdio>

int main()
{
  int a, x;
  scanf("%d %d", &a, &x);
  printf("%d", a>>x);
}