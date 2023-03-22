#define NUM_ITER 2430

#include <header.h>

int main_bench()
{
 int n,i,j,c[100000];
 double sum,a[10000],b[100000];
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
  my_scanf("%d",&c[i]);
 a[0]=1;
 a[1]=1;
 for(j=0;j<n;j++)
 {
  for(i=2;i<c[j]+2;i++)
   a[i]=a[i-2]+a[i-1];
  for(i=0;i<c[j];i++)
   b[i]=a[i+2]/a[i+1]; 
  sum=0;
  for(i=0;i<c[j];i++)
   sum=sum+b[i];
  my_printf("%.3lf\n",sum);
 }
 getchar();
 getchar();
 return 0;      
}
