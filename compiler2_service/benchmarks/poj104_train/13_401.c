#define NUM_ITER 7978

#include <header.h>

int main_bench()
{
     int n,l,i,j,x;
     my_scanf("%d",&n);
     l=0;
     int a[20000];
     for(i=0;i<n;i++)
     my_scanf("%d",&a[i]);
     for(j=0;j<n;j++)
     {
                      for(i=(j+1);i<n;i++)
       {
                         if(a[j]==a[i])
                         a[i]='*';
       }
     }
      if(a[n-1]!='*')
      {
                      for(i=0;i<n-1;i++)
          { 
                      if(a[i]!='*')
                       my_printf("%d ",a[i]);
         }
         my_printf("%d",a[n-1]);
      }
    else
     {
          for(i=n-1;i>0;i--)
      {
                        if(a[i]=='*')l=l+1;
                        else break;
      }
          for(j=0;j<n-l-1;j++)
          { 
                      if(a[j]!='*')
                       my_printf("%d ",a[j]);
         }
         my_printf("%d",a[n-l-1]);
     }
    
      
       
    
    

}
