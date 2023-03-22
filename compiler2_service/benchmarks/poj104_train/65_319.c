#define NUM_ITER 36138

#include <header.h>

int main_bench()
{
    int n,i,suma=0,sumb=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b;
        my_scanf("%d %d",&a,&b);
        if(b-a==1||b-a==-2)suma++;
        if(a-b==1||a-b==-2)sumb++;            
    }
    if(suma>sumb)my_printf("A");
    if(suma<sumb)my_printf("B");
    if(suma==sumb)my_printf("Tie");
}
