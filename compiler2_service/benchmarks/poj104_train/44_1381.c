#define NUM_ITER 411011

#include <header.h>

int main_bench()
{
    int reverse(int n);
    int i,n,j=0;
    int a[6];
    for(i=0;i<6;i++){
                     my_scanf("%d",&a[i]);
                     }
    for(i=0;i<6;i++){
                     if(a[i]<0){
                                 a[i]=0-a[i];
                                 j=reverse(a[i]);
                                 my_printf("-%d\n",j);
                                }
                     else {
                          j=reverse(a[i]);
                          my_printf("%d\n",j);
                          }
                     
                     }
    return 0;
}

int reverse(int n)
{
     int b=0,l=0;
    do{
        b=n-n/10*10;
        n=n/10;
        l=l*10+b;
    }while (n>=1);
    return l;
}