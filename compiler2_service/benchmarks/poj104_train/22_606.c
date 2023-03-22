#define NUM_ITER 1495587

#include <header.h>

int main_bench()
{
        int a[301],i,k,j,l,t,s;
    char b[300];
    i=0;
    my_scanf("%d%c",&a[i],&b[i]);
    while(b[i]==',')
    {
      i++;
      my_scanf("%d%c",&a[i],&b[i]);
    }
    k=0;
    while((a[k]==a[k+1])&&(k<i))
    k++; 
    if(i==0) my_printf("No");
    else 
    {
         if(k==i) my_printf("No");
         else
         {
            for(j=0;j<i;j++)
             for(l=0;l<i-j;l++)
               if(a[l]>a[l+1])
                 {t=a[l];a[l]=a[l+1];a[l+1]=t;} 
            s=i;
            while(a[s]==a[s-1])
            s--;
            my_printf("%d",a[s-1]); 
              
          
         } 
     }
     return 0;
} 
                
              