#define NUM_ITER 47980

#include <header.h>

int main_bench()
{
    int n;
    int a[100000];
    int k;
    my_scanf("%d",&n);
    int i,j,num=0,count=0;
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    my_scanf("%d",&k);
    for(i=0;i<n;i++)
    {
           if(a[i]!=k)
           num++;
    }
    for(i=0;i<n;i++)
    {
           if(a[i]!=k)
           {
                      count++;
                      if(count==num)
                      my_printf("%d",a[i]);
                      else
                      my_printf("%d ",a[i]);
           }
    }
}