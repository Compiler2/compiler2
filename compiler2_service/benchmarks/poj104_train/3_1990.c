#define NUM_ITER 4435

#include <header.h>


 
int main_bench(){
    int n,tmp,i,j,k; 
    my_scanf("%d %d",&n,&k);
    j=0; 
    int a[n]; 
    for(i=0;i<=n-1;i++)
    {
                       my_scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
                     for(j=0;j<=n-i-1;j++)
                     {
                                        if(a[j]>a[j+1])
                                        {
                                                       tmp=a[j];
                                                       a[j]=a[j+1];
                                                       a[j+1]=tmp;
                                        }
                     }
    }
 
    for(i=0;i<=n-1;i++)
    {
         for(j=i+1;j<=n-i-1;j++)
         {
                            if(k==a[i]+a[j])
                            {
                                             my_printf("yes");
                                             break;
                            }
         }
         if(k==a[i]+a[j])
         {
              break;
         }               
    }
    if(i==n) my_printf("no"); 

    return 0;
} 
