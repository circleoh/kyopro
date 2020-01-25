//-------------------------------------1101-------------------------------------//
#include <cstdio>

int main() 
{
  printf("Hello, World!");
  return 0;
}

//-------------------------------------1102-------------------------------------//
#include <cstdio>

int main() 
{
  printf("Hello,\nWorld!");
  return 0;
}

//-------------------------------------1103-------------------------------------//
#include <cstdio>

int main() 
{
  printf("\"c:\\test\"");
  return 0;
}

//-------------------------------------1106-------------------------------------//
#include <cstdio>

int main() 
{
  int num=1;
  num <<= 31;
  printf("%d %d", num, num-1);
}

//-------------------------------------1107-------------------------------------//
#include <cstdio>

int main() 
{
  for(int i=0; i<50; ++i) printf("print");
  return 0;
}

//-------------------------------------1107-------------------------------------//
#include <cstdio>

int main() 
{
  for(int i=0; i<50; ++i) printf("print");
  return 0;
}

//-------------------------------------1109-------------------------------------//
#include <cstdio>

int main() 
{
  char name[20]; int age=0; char code=0; double key=0;
  scanf("%s\n%d\n%c\n%lf", name, &age, &code, &key);
  printf("%s\n%d\n%c\n%g", name, age, code, key);
}

//-------------------------------------1109-------------------------------------//
#include <cstdio>

int main() 
{
  char name[20]; int age=0; char code=0; double key=0;
  scanf("%s\n%d\n%c\n%lf", name, &age, &code, &key);
  printf("%s\n%d\n%c\n%g", name, age, code, key);
}
