#include <header.h>

int main_bench()
{
 int n,a,b,i,j,k;
 my_scanf("%d",&n);
 j=0;
 k=0;
 for(i=0;i<n;i++)
 {
  my_scanf("%d %d",&a,&b);
  if(a>=90&&a<=140)
   {
    if(b>=60&&b<=90)
     {j=j+1;
       if(j>=k)
       k=j;
     }
    else j=0;
   }
   else j=0;
  }
 my_printf("%d",k);
 return 0;
}