#include <header.h>

int main_bench()
{
    int a,b,k;
    char i;
    my_scanf("%d",&a);
    b=-1;
    while((i=getchar())==',')
    {
      my_scanf("%d",&k);
      if(k>a)
      {
      b=a;
      a=k;
      }
      if(k>b&&k<a)
      b=k;
      }
      if(a==b||b==-1)
      my_printf("No");
      else 
      my_printf("%d",b);
      return 0;
}
