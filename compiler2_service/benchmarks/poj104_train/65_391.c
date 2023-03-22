#define NUM_ITER 32774

#include <header.h>

int fun(int a,int b)
{
    if(a==b)
        return 233;
    else
        if((a==1&&b==2)||
           (a==0&&b==1)||
           (a==2&&b==0))
            return 1;
        else
            return 0;

}

main_bench()
{
    int n,i,l,na=0,nb=0;
    int a,b;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d %d",&a,&b);
        if(fun(a,b)==1)
            na++;
        if(fun(a,b)==0)
            nb++;
        else continue;
    }
    if(na>nb)
        my_printf("A");
    if(na==nb)
        my_printf("Tie");
    if(na<nb)
        my_printf("B");
}
