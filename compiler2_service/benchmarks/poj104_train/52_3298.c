#include <header.h>

int main_bench()
{
    int n,m,i,t;
    int a[200];
    my_scanf("%d %d",&n,&m);
    for (i=0;i<n;i++)
     my_scanf("%d",&a[i]);
    int l=0;
    while(l<m)
      {  
         t=a[n-1];       
         for (i=n-1;i>=1;i--)
         a[i]=a[i-1];
         a[0]=t;
         l++;
      } 
     for (i=0;i<n;i++)
       {
         if (i==0)
          my_printf("%d",a[i]);
         else
          my_printf(" %d",a[i]);
       }                  
     my_printf("\n");
     getchar();
     getchar();
} 
    
