#define NUM_ITER 397666

#include <header.h>

main_bench()
{
    int i,j,k;
    my_scanf("%d",&i);
    if (i==1)
    my_printf("End");
    for (;i!=1;)
    {
    if  (i%2==0)
    {j=i/2;
    my_printf("%d/2=%d\n",i,j);}
    else
    {j=3*i+1;
    my_printf("%d*3+1=%d\n",i,j);}
    if (j==1)
    {my_printf("End");
    break;}
    else
    {
        if  (j%2==0)
    {i=j/2;
    my_printf("%d/2=%d\n",j,i);}
    else
    {i=3*j+1;
    my_printf("%d*3+1=%d\n",j,i);}
       if (i==1)
       {my_printf("End");
       break;}
    }
    }
}