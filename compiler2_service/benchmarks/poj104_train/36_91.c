#define NUM_ITER 960954

#include <header.h>

int main_bench()
{
  int l,r=0;
  char *p,*q,a[100],b[100];
  my_scanf("%s %s",a,b);
  if(strlen(a)!=strlen(b)) my_printf("NO");
  else
  {
    l=strlen(a);
    for(p=a;p<a+l;p++)
    {
      for(q=b;q<b+l;q++)
      {
        if(*p==*q)
        {
          r++;
          *q=0;
          break;
        }
      }
    }
    if(r==l) my_printf("YES");
    else my_printf("NO");
  }
}