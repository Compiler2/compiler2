#include <header.h>

int main_bench()
{
	int m;
	my_scanf("%d",&m);
	for(int i=0;i<m;i++)
	    {
		int n;
		my_scanf("%d",&n);
		float *a=(float *)malloc((n+i)*sizeof(float));
		float *b=(float *)malloc((n+i)*sizeof(float));
		a[0]=1.0;
		a[1]=2.0;
		b[0]=2.0;
		b[1]=3.0;
		for(int j=2;j<n;j++)
		    {
			a[j]=a[j-1]+a[j-2];
			b[j]=b[j-1]+b[j-2];	
			}	
		float sum=0;
		for(int j=0;j<n;j++)
		    sum+=b[j]/a[j];
		my_printf("%.3f\n",sum);
		}
} 