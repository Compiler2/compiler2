#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
double chu1,chu2;
my_scanf("%lf%lf",&chu1,&chu2);
int i;
double bi1[100],bi2[100];
for(i=0;i<n-1;i++)
{
    my_scanf("%lf%lf",&bi1[i],&bi2[i]);
}

for(i=0;i<n-1;i++)
{

    if(chu2/chu1-bi2[i]/bi1[i]>0.05)

        my_printf("worse\n");
    else if(bi2[i]/bi1[i]-chu2/chu1>0.05)
        my_printf("better\n");
    else 
        my_printf("same\n");
}
return 0;
}
