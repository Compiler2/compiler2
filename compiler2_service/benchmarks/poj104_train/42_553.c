#define NUM_ITER 47978

#include <header.h>

int main_bench()
{int *p,k,j,i,a[100000],n,m=0;
p=a;
my_scanf("%d",&n);
for (i=0;i<n;i++)
my_scanf("%d",&a[i]);
my_scanf("%d",&k);
for (i=0;i<n;i++)
{
	if(*(p+i)==k)
	{
		while(*(p+i)==k)
		{
			for (j=i;j<n-m;j++)
				a[j]=a[j+1];
			m=m+1;
		}
	
	
	}
	
	
}

for (i=0;i<n-m-1;i++,p++)
my_printf("%d ",*p);

my_printf("%d",*p);


}