#define NUM_ITER 8458

#include <header.h>

int main_bench()
{
    int n,i,j;
    int a[20001];
    my_scanf("%d",&n);
    for (i=0;i<n;i++)
    {my_scanf("%d",&a[i]);}
    
    for(j=0;j<n;j++)
    {
       if(a[j]>=10&&a[j]<=100)
       {
       for(i=j+1;i<n;i++)
       {
          if(a[i]>=10&&a[i]<=100)
          {if(a[j]==a[i])
          {a[i]=0;}}                                    
       }
       }                                   
    }
    my_printf("%d",a[0]);
    for (i=1;i<n;i++)
    {
        if (a[i]!=0)
    {my_printf(" %d",a[i]);}
    }
    
    getchar();
    getchar();
    getchar(); 
    
    
    
    
    
}
