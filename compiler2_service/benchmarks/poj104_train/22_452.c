#define NUM_ITER 1388578

#include <header.h>

int main_bench()
{
	int a[300],i,j,k=1,t;
	char comma;
	my_scanf("%d",&a[0]);
	do
	{
		my_scanf("%c",&comma);
		if(comma!=',')
			break;
		my_scanf("%d",&a[k]);
		k=k+1;
	}while(k<=300);
	
	
	for(j=1;j<k;j++)
	{
		for(i=0;i<k-1;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i+1];
				a[i+1]=a[i];
				a[i]=t;
			}
		}
	}
	if(a[0]==a[k-1])
		my_printf("No");
	else
	{
		for(i=1;i<=k-1;i++)
		{
			if(a[i]==a[0])
			a[i]=100000;
			if(a[i]<100000)
			{
				my_printf("%d",a[i]);
				break;
			}
		}
	}
	return 0;
}

