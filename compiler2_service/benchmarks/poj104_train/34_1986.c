#define NUM_ITER 289305

#include <header.h>

int main_bench()
{
    int a;
    my_scanf("%d\n",&a);
    if(a==1)my_printf("End\n");
    else
    {
        do
        {
                            x:
               if(a%2==0) my_printf("%d/2=%d\n",a,a/2),a=a/2;
               else my_printf("%d*3+1=%d\n",a,a*3+1),a=a*3+1;
               if(a==1)goto y;
               else goto x;
        }
        while(a=1);
    y:
    my_printf("End\n");
}
return 0;
} 