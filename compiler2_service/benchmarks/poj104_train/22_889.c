#include <header.h>

int main_bench()
{
 unsigned int a,b=0,c;char d;

 for(my_scanf("%d",&a);(d=getchar())!='\n';)
 {
  if(a>b)
  {
   c=b;
   b=a;
  }
  else if(a==b)
   ;
  else if(a>=c)
   c=a;
  my_scanf("%d",&a);
 }
  if(a>b)
  {
   c=b;
   b=a;
  }
  else if(a==b)
   ;
  else if(a>=c)
   c=a;
 if(c==0)
  my_printf("No");
 else my_printf("%d",c);
 return 0;
}
