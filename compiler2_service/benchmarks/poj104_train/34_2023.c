#define NUM_ITER 247722

#include <header.h>

main_bench()
{
    int a,b;
    my_scanf("%d",&a);
    haha: 
    if (a==1)my_printf("End\n");
    else
    { 
     if(a%2==1)
       {
        b=a*3+1;  
        my_printf("%d*3+1=%d\n",a,b);
        a=(a*3)+1;goto haha;
       }
     if(a%2==0)
       {
        b=a/2;
        my_printf("%d/2=%d\n",a,b);
        a=a/2;
        goto haha;
       }
    }
}