#define NUM_ITER 4813

#include <header.h>

main_bench()
{
int n,i,j;
int z,m,a[100];
float val;

my_scanf("%d",&n);

for(i=0;i<n;i++)
{my_scanf("%d",&a[i]);}

for(i=0;i<n;i++)
{val=0;
 z=2;
 m=1;
	for(j=0;j<a[i];j++)
	{
		val=val+(float)z/(float)m;
		z=m+z;
		m=z-m;
	}
my_printf("%.3f\n",val);
}
return 0;
}