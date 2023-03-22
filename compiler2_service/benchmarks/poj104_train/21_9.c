#include <header.h>

float average(int a[],int n)
{
	int sum=0,i;
	float avr;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	avr=(float)sum/n;
	return(avr);
}

int main_bench()
{
	int n,a[300],i,num;
	float avr,b[300],t=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	avr=average(a,n);
	for(i=0;i<n;i++)
	{
		if(a[i]>avr)
			b[i]=(float)a[i]-avr;
		else
			b[i]=(float)avr-a[i];
	}
	for(i=0;i<n;i++)
		if(b[i]>t)
		{
			t=b[i];
			num=i;
		}
	my_printf("%d",a[num]);
	for(i=num+1;i<n;i++)
		if(b[i]==t)
			my_printf(",%d",a[i]);
	my_printf("\n");
}