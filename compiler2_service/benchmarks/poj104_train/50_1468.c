#include <header.h>

int main_bench()
{
    int w,i,a;
    int sz[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    my_scanf("%d",&w);
    w+=12;
    if((w%7)==5){
       my_printf("1\n");
    }
    for(i=1;i<12;i++){
        w+=sz[i];
        if((w%7)==5){
           a=i+1;
           my_printf("%d\n",a);
        }
    }
    return 0;
}