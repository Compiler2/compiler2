#define NUM_ITER 40087

#include <header.h>

int main_bench()
{
    int n,m,i,a[100],x=0,k,c=0,temp,count=0;
    my_scanf("%d%d",&n,&m);
    for  (i=0;i<n;i++)
    {
         my_scanf("%d",&a[i]);
    }   
    if (n%m==0)
    {
          k=n/m;
          for (i=0;i<m;i++)
          {
                      x=i;
                      while (c!=i||count==0)
                         {  
                         count=1;    
                         if (x+m<n)
                        c=x+m;                        
                        else c=x+m-n;
                        
                         temp=a[c];
                         a[c]=a[i];
                         a[i]=temp;
                         x=c; 
                          } 
                          
                          count=0;
                          x=0;
                          c=0;
                                              
          }  
    }
    
    else 
    {
         count=0; 
         x=0;
         while (count!=n)
         {
                        if (x+m<n)
                        c=x+m;
                        else c=x+m-n;                               
                         temp=a[c];
                         a[c]=a[0];
                         a[0]=temp;
                         x=c; 
                         count++;
         }
    }
    my_printf("%d",a[0]);
    for (i=1;i<n;i++)
    my_printf(" %d",a[i]);
          return 0;
} 