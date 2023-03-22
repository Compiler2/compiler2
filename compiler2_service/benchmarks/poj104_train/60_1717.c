#include <header.h>

int su(int i)
{
    int d=2;
    while(i%d!=0)
       {
          d=d+1;
       }
    if(d>=i)
       return (1);
    else
       return (0);     
} 
int main_bench()
{
    int su(int i);
    int n,a,b;
    my_scanf("%d",&n);
    if(n>=5)
    {
       for(a=3;a<=n-2;a+=2)
       {
          b=a+2;
          if(su(a)&&su(b))
             my_printf("%d %d\n",a,b);
       }
    }
    else
     my_printf("empty");
}
