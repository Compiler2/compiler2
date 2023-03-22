#define NUM_ITER 11035

#include <header.h>

int main_bench()
{int n,i,j,k,m=0;;
 int a[20001];
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 my_scanf("%d",&a[i]);
 for(i=0;i<n-1-m;i++)
  for(j=i+1;j<n-m;)
   if(a[j]==a[i])
   {for(k=j;k<n-m;k++)
    a[k]=a[k+1];
    m++;}
   else j++;
  for(i=0;i<n-1-m;i++)
  my_printf("%d ",a[i]);
  my_printf("%d",a[n-m-1]);
}
