#include <header.h>

int main_bench()
{int n,i,j;
 my_scanf("%d\n",&n);
 int a[n],s=0,m=0,b;
 for(i=0;i<n;i++)
 {
   my_scanf("%d",&a[0]);
   if(a[0]==0)
   {s=1;}
   else{s=0;}
  for(j=1;j<n;j++)
  {
   my_scanf(" %d",&a[j]);
   if(a[j]==0)
   {s++;}
  }
   if(s==2)
    {m++;}
    my_scanf("\n");            
 }
 b=m*m;
 my_printf("%d\n",b);
return 0;
}