#define NUM_ITER 1710

#include <header.h>

main_bench()
{  
  int m,i,n,j;
  my_scanf("%d",&m);
  int a[10000],b[10000];
  a[0]=2;
  a[1]=3;
  b[0]=1;
  b[1]=2;
  for(i=2;i<10000;i++)
  {  a[i]=a[i-1]+a[i-2];
     b[i]=b[i-1]+b[i-2];
  }
  for(i=0;i<m;i++)
  { float sum=0;
   my_scanf("%d",&n);
   for(j=0;j<n;j++)
   sum=sum+(float)a[j]/b[j];
  my_printf("%.3f\n",sum);}
  getchar();
  getchar();
  getchar();
}
   