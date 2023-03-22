#include <header.h>

int main_bench()
{
    int a[1000],b[1000],i,n;
    my_scanf("%d",&n);
    double r;
    for(i=0;i<n;i++){
        my_scanf("%d %d",&a[i],&b[i]);
    }
    r=(double)b[0]/a[0];
    for(i=1;i<n;i++){
       if((double)b[i]/a[i]-r>0.05)
           my_printf("better\n");
       else if(r-(double)b[i]/a[i]>0.05)
           my_printf("worse\n");
       else 
           my_printf("same\n");
    }
}
     