#define NUM_ITER 31635

#include <header.h>

int main_bench()
{
    int n,i,a,x,y;
    my_scanf("%d",&n);
    if(n<5)
    {
           my_printf("empty");
    }
    else
    {
        for(i=5;i<=n;i++)
        {
                  for(a=2;a<(i-2);a++)
                  {
                                  if(i%a==0||(i-2)%a==0)
                                  break;
                                  if(a==i-3)
                                  {
                                            x=i-2,y=i;
                                            my_printf("%d %d\n",x,y);
                                  }
                  }
        }                
    }
}