#define NUM_ITER 1600925

#include <header.h>

int main_bench()
{
    int a,b,c,d,e;
    my_scanf("%d",&a);
    if(a/10000==0)
    {
        if(a/1000==0)
        {
            if(a/100==0)
            {
                if(a/10==0)
                    my_printf("%d\n",a);
                else
                {
                    b=a%10;
                    c=a/10;
                    my_printf("%d%d\n",b,c);
                }
            }
            else
                {
                    c=a/100;
                    d=(a-c*100)/10;
                    b=(a-c*100)%10;
                    my_printf("%d%d%d\n",b,d,c);
                }
        }
        else
        {
            b=a/1000;
            c=(a-b*1000)/100;
            d=(a-b*1000-c*100)/10;
            e=(a-b*1000-c*100)%10;
            my_printf("%d%d%d%d\n",e,d,c,b);
        }
    }
    else
        my_printf("00001\n");
    return 0;
}