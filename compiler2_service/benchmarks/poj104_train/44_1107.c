#define NUM_ITER 403959

#include <header.h>

int reverse(int num)
{
    int d=0,m=num;
    if(m>0)
       while(m!=0)
       {
           d=d*10+m%10;
           m/=10;
       }
    else if(m<0)
    {
        m=m*(-1); 
        while(m!=0)
        {
            d=d*10+m%10;
            m/=10;
        }
        d=d*(-1);
    }
          else;
    return d;
}

int main_bench()
{
    int i,a;
    for(i=1;i<=6;i++)
    {
        my_scanf("%d",&a);
        my_printf("%d\n",reverse(a));
    }
    getchar();
    getchar();
}