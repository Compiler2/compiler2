#define NUM_ITER 7122

#include <header.h>

int main_bench()
{
 int n,i,j;
 int k=1;
 int a[20000];
 my_scanf("%d",&n);
 for(i=1;i<=n;i++)
   {
    my_scanf("%d",&a[i-1]);
     for(j=0;j<=i-1;j++)
      {
       if(i-1==0) {k=k+1; a[0]=a[0];}
             else {
                   if(a[j]==a[i-1]&&j!=i-1) break;
                         else if(a[j]==a[i-1]) {a[k-1]=a[i-1]; k=k+1;}
                  }
      }
    }
   for(i=0;i<=k-3;i++) my_printf("%d ",a[i]);
   my_printf("%d",a[k-2]);
 return 0;
}  
                             