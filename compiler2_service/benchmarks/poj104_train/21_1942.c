#include <header.h>

int main_bench()
{
	float a[300];
	unsigned int b[300],i,j=0,n;
	float sum=0,p,max=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%f",&a[i]);
		sum+=a[i];
	}
	p=(float)sum/n;
	for(i=0;i<n;i++)
	if(fabs(a[i]-p)>max)
			max=fabs(a[i]-p);
	for(i=0;i<n;i++)
		if(fabs(fabs(a[i]-p)-max)<0.01)
			b[j++]=(int)a[i];
	if(j==1)
		my_printf("%d\n",b[0]);
	else
		for(i=0;i<j;i++)
			my_printf("%d%c",b[i],i<j-1?',':'\n');
}