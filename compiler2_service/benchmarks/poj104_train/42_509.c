#define NUM_ITER 44309

#include <header.h>



int main_bench()
{
    int n,k,*p,*q,m,i,j,flag;
    int a[100001];
    p=&a[0];
    
    my_scanf("%d",&n);
    for(i=0;i<n;i++,p++)
        my_scanf("%d",&*p);
    my_scanf("%d",&k);
    p=&a[0];
    for(i=0;i<n;i++,p++)
    {
                          
    }
                        
    m=n;
    p=&a[0];
    for(i=0;i<=n;i++,p++)
    {
         if(p!=&a[0]&&*(p-1)==k)
         {
          p=p-1;
          i=i-1;
          j=j-1;                    
          }
                     
         if(*p==k)
         {
           q=p;
           for(j=i;j<n;j++,q++)    
              {
                *q=*(q+1);
                  
                
              }
           
           n=n-1;
           
           
          
           
          }
          
          
    }
    
    p=&a[0];
    for(i=0;i<n-1;i++,p++)
    {
     my_printf("%d ",*p);
    }
    my_printf("%d",*p);
}