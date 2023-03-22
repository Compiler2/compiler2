#define NUM_ITER 80969

#include <header.h>

int main_bench()
{
    int a, i, n, sum=0;
    my_scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%7==0||i%10==7||(int)(i/10)==7){
            continue;
        }
        else{
             sum=sum+i*i;
        }
    }
    my_printf("%d", sum);         
    return 0;
}
