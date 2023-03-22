#include <header.h>

int main_bench()
{
 int i,j,n,k,a[1001];
 my_scanf("%d %d",&n,&k);
 for(i=1;i<=n;i++)
 {
   my_scanf("%d",&a[i]);
  }
 for(i=1;i<=n;i++)
 {
   for(j=i+1;j<=n;j++)
     {
        
         
        
          
            if(a[i]+a[j]==k)
              {
              my_printf("yes");
              break;
              }
           
      }
    if(a[i]+a[j]==k)
     break;
    if(i==n)
     my_printf("no");
}      
}