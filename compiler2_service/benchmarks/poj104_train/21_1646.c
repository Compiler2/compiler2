#define NUM_ITER 5171

#include <header.h>

float f(float a[],int n)
{
	float s=0;
	int i;
	for(i=0;i<=n-1;i++)
	{
		s=s+a[i];
	}
	return s/n;
}
float g(float a)
{
	if(a>0)
		return a;
	else
		return -a;
}
int main_bench()
{
	float a[100],b[100],c=0,d,t,m[100];
	int n,i,j,k=0;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		my_scanf("%f",&a[i]);
	for(i=0;i<=n-1;i++)
	{
		for(j=n-2;j>=i;j--)
		{
			if(a[j+1]<a[j])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}

	d=f(a,n);
	for(i=0;i<=n-1;i++)
	{
		b[i]=g((d-a[i]));
		if(b[i]>c)
			c=b[i];
	}
	for(i=0;i<=n-1;i++)
	{
		if(b[i]==c)
		{
			m[k]=a[i];
			k++;
		}
	}
	if(k==1)
		my_printf("%.0f",m[0]);
	else
	{
		for(i=0;i<=k-2;i++)
			my_printf("%.0f,",m[i]);
		my_printf("%.0f",m[k-1]);
	}

}