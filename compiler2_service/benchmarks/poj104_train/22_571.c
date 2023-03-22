#include <header.h>

int main_bench()
{
	int i=0,j,n,a[100],temp,k=0;
	char b;
	do{
		my_scanf("%d%c",&a[i],&b);
		i=i+1;
	}
	while(b==',');
	n=i;
	if(n==1)my_printf("No");
	else
	{
		for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	
		}
	for(j=0;j<n-1;j++)if(a[j]==a[j+1])k++;
		if(k==n-1)my_printf("No");
		else for(i=0;i<n;i++)
		{
			if(a[i]<a[0])
			{
				my_printf("%d",a[i]);
				break;
			}
		}
	}
}
	