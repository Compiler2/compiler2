#define NUM_ITER 20589

#include <header.h>

int main_bench()
{
    int n,i;
    my_scanf("%d",&n);
    double shu[100][2];
    my_scanf("%lf %lf",&shu[0][0],&shu[0][1]);
    double lv=shu[0][1]/shu[0][0];
    for(i=1;i<n;i++){my_scanf("%lf %lf",&shu[i][0],&shu[i][1]);if(shu[i][1]/shu[i][0]-lv>0.05){my_printf("better\n");}else if(lv-shu[i][1]/shu[i][0]>0.05){my_printf("worse\n");}else{my_printf("same\n");}}
    return 0;
}
    