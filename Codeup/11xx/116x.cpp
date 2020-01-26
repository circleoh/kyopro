//-------------------------------------1160-------------------------------------//
#include <cstdio>

int main()
{
  int a;
  scanf("%d", &a);
  if(a%2 == 1) printf("oh my god");
  else printf("enjoy");
}

//-------------------------------------1161-------------------------------------//
#include <cstdio>

inline const char* getStr(int a)
{
    if(!(a%2)) return "짝수"; 
    return "홀수";
}
    
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%s+%s=%s", getStr(a), getStr(b), getStr(a+b));
}

//-------------------------------------1162-------------------------------------//
#include <cstdio>

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if((a-b+c)%10 == 0) printf("대박");
  else printf("그럭저럭");
}

//-------------------------------------1163-------------------------------------//
#include <cstdio>

inline bool isEven(int a) { return a%2==0; }

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(isEven(((a+b+c)/100)%10)) printf("대박");
  else printf("그럭저럭");
}

//-------------------------------------1164-------------------------------------//
#include <cstdio>

int main()
{
  int h[3];
  scanf("%d %d %d", &h[0], &h[1], &h[2]);
  for(auto i: h) {
    if(i-170 <= 0) {
      printf("CRASH");
      return 0;
    }
  }
  printf("PASS");
}