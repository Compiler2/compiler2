#define NUM_ITER 300862

#include <header.h>

int main_bench()
{
    int a=1,b=1,i=1;
    my_scanf("%d",&a);
    for(i=a;i!=1;i=b)
    {
    if(i%2==0)
    {
       b=i/2;       
    my_printf("%d/2=%d\n",i,i/2);
                       }
    else
    {
        b=i*3+1;
    my_printf("%d*3+1=%d\n",i,i*3+1);
                        }
                                   }                   
    my_printf("End");                    
    
    }