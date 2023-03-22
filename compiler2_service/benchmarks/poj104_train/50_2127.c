#define NUM_ITER 940402

#include <header.h>

int main_bench()
{
    int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,sum=12,w;
    my_scanf("%d",&w);
    if(w==7)
        my_printf("1\n");
    for(i=1;i<=11;i++)
    {
        sum=sum+days[i];
        if(w>=1&&w<=5)
        {if(sum%7==(5-w))
            my_printf("%d\n",i+1);}
        else
        {if(sum%7==(12-w))
            my_printf("%d\n",i+1);}
    }
    return 0;
}
