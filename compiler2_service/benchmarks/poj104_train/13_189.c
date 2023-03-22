#define NUM_ITER 7613

#include <header.h>

int main_bench()
{
 int a[20000];
 int i,j,k,x;
 my_scanf("%d",&x);
 for(i=0;i<x;i++)
	 my_scanf("%d",&a[i]);
 for(i=0;i<x;i++)
 {
  for(j=i+1;j<x;j++)
  {
   if(a[i]==a[j])
   {
	   x--;
    for(k=j;k<x;k++)
     a[k]=a[k+1];
    j--;
   }
  }
 }
 for(i=0;i<x-1;i++)my_printf("%d ",a[i]);
 if(i<x)my_printf("%d",a[i]);
 return 0;
}