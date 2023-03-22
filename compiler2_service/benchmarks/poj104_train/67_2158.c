#define NUM_ITER 30004

#include <header.h>

int main_bench()
{
    int n,i;
    double x;
    int a[100],b[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&a[i]);
        my_scanf("%d",&b[i]);
    }
    x=(double)(b[0])/(double)(a[0]);
    for(i=1;i<n;i++){
        if((double)(b[i])/(double)(a[i])-x>0.05){
            my_printf("better");
            my_printf("\n");
        }
        else if(x-(double)(b[i])/(double)(a[i])>0.05){
            my_printf("worse");
            my_printf("\n");
        }
        else{
            my_printf("same");
            my_printf("\n");
        }
    }
    return 0;

}
