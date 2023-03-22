#define NUM_ITER 1401899

#include <header.h>

int main_bench()
{
    int n,i,k,out;
    int A[5];
    my_scanf("%d",&n);
    for(i=1;1<=5;i++)
    {
        if (n<1) break; 
         my_printf("%d",n%10);
         n=n/10;
     
     }
 return 0;
}