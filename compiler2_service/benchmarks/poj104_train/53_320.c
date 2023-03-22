#include <header.h>

int main_bench()
{
int a[300],b[300];
int i,j,k,m,sum=1,z=1;
my_scanf("%d",&k);
b[0]=a[0];
  for (i=0;i<=k-1;i++)
  {
 	my_scanf("%d",&a[i]);
  }
  
   for (i=1;i<=k-1;i++)
   {
	   for(j=0;j<i;j++)
	   {
        m=a[i]-a[j];
        sum=sum*m;
	   }
   if (sum!=0)
   {
	   b[z]=a[i];
       z++;
   }
   else sum=1;
   }
    b[0]=a[0];
   for(i=0;i<z-1;i++)
   my_printf("%d,",b[i]);
   my_printf("%d\n",b[z-1]);
   }

