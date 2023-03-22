#define NUM_ITER 55980

#include <header.h>

int main_bench()
{
    int a[100000];
    int n,k,i,j=0,l;
    int *p;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    my_scanf("%d",&k);
    p=a;
    for(i=0;i<n;i++)
       {
                    if(a[i]!=k)
       {
                  if(j!=0) my_printf(" %d",a[i]);
                  if(j==0) {my_printf("%d",a[i]);j++;}   
       }
       
       }
} 