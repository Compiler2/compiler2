#define NUM_ITER 43539

#include <header.h>

int main_bench()
{  int n,i,*p,j,m,z;
   int k,a[100000];
   my_scanf("%d",&n);
   for (i=0;i<=(n-1);i++)
       my_scanf("%d",&a[i]);
   my_scanf("%d\n",&k);
   z=0;
   for (i=0;i<=(n-1);i++)
      {if ((a[i])==k) {z++;
                       for (j=(i+1);j<=(n-1);j++)  
                          {if (a[j]!=k) {m=a[i];a[i]=a[j];a[j]=m;z--;break;}
                             }
                         
       }}
  p=&a[0];
  my_printf("%d",*p);
  for (p=a+1;p<(a+n-z);p++)
     my_printf(" %d",*p);


 }