#define NUM_ITER 63652

#include <header.h>


int main_bench()
{
    int n,a,max,min,i,e;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d",&a);
                     if(i==0) {
                              max=min=a;
                              }
                     if(a>max)  max=a;
                     else if(max>a && a>min)  min=a;
                     }
                     
                     
                     
    my_printf("%d\n%d\n",max,min);
                               
                               

  return 0;
}
