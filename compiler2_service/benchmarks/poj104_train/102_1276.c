#define NUM_ITER 12567

#include <header.h>

main_bench()
{
	int n,i,j=0,k=0,l;
	my_scanf("%d",&n);
	double a[43],f[43],m[43],z;
	char sex[10];
	char male[10]="female";
	for(i=0;i<n;i++)
	{
		my_scanf("%s",sex);
		my_scanf("%lf",&a[i]);
		if(strcmp(sex,male)==0)
		{
			m[j]=a[i];
			j++;
		}
		else
		{
			f[k]=a[i];
			k++;
		}
	}
	my_printf("\n");
	for(i=0;i<j-1;i++)
	{
		for(l=0;l<j-1;l++)
		{
			if(m[l]<m[l+1])
			{
				z=m[l];
				m[l]=m[l+1];
				m[l+1]=z;
			} 
		}
	}
	for(i=0;i<k-1;i++)
	{
		for(l=0;l<k-1;l++)
		{
			if(f[l]>f[l+1])
			{
				z=f[l];
				f[l]=f[l+1];
				f[l+1]=z;
			} 
		}
	}
	my_printf("%.2f",f[0]);
	for(i=1;i<n;i++)
	{
		if(i<k)
		{
			my_printf(" %.2f",f[i]);
		}
		else
		my_printf(" %.2f",m[i-k]);
	}
} 