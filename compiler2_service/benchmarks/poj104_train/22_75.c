#define NUM_ITER 106159

#include <header.h>

int main_bench()
{
	int n,a[300],i,j,temp,k=0;
	char b[300];
	i=0;
	for(i=0;;i++)
	{
		my_scanf("%d",&a[i]);
		my_scanf("%c",&b[i]);
		n=i+1;
		if(b[i]!='\n')
			continue;
		else
			break;
	}
	if(n==0)
		my_printf("No\n");
	if(n>0)
	{
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		
		temp=a[n-1];
		if(a[0]==temp)
			my_printf("No\n");
		else
		{
		for(i=n-1;i>=0;i--)
		{
			if(a[i]!=temp)
			{
				k=i;
				break;
			}
		}
		my_printf("%d\n",a[k]);
		}
	}
}