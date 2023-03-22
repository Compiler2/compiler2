#define NUM_ITER 5900

#include <header.h>

int main_bench()
{
 int n,i,j;
 int a[10000],b[10000];
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
  my_scanf("%d",&b[i]);
 a[0]=1;
 a[1]=1;
 for(i=0;i<n;i++)
 {
  for(j=2;j<=b[i]-1;j++)
  a[j]=a[j-1]+a[j-2];
  my_printf("%d\n",a[b[i]-1]);                
 }
 getchar();
 getchar();
 return 0;  
}

 
