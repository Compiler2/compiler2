#define NUM_ITER 7567

#include <header.h>

int main_bench()
{
int a[20000];
int n,i,j,s,k;
my_scanf("%d",&n);
for(i=0;i<n;i++)
  {
   my_scanf("%d",&a[i]);
  }
for(i=0;i<n;i++)
  {
     s=a[i];
     for(k=i+1;k<n;k++)
     {
       if(a[k]==s)
       {       
        for(j=k;j<n;j++)
        {
         a[j]=a[j+1];
        }
        n--;
        k--;        
       }
     }
   }
for(i=0;i<n;i++)
  {
   if(i>0)
   my_printf(" ");
   my_printf("%d",a[i]);
  }
return 0;
}
