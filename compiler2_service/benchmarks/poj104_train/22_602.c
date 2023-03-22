#include <header.h>

int main_bench()
{
	int i=0,a[300]={0},j,k,p=0;
    for(i=0;i<300;i++)
	{
		if(i==0)
		{
			my_scanf("%d",&a[i]);
		}
		else
		{
			my_scanf(",%d",&a[i]);
		}

	}
	
	if(a[1]!=0)
	{
	for(i=0;i<=300;i++)
	{
		for(j=0;j<299-i;j++)
		{
			if(a[j]<a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	i=0;
	j=1;
	k=0;
	for(k=0;k<300;k++)
	{
		p=p+a[k];
		if(a[k]!=0)
		{
		i++;
		}
	}

	j=a[0]*i;
	i=0;
	k=0;
	while(k<300)
	{
		if(a[i]==a[i+1])
		{
			i++;
		}
		k++;
	}
	if(p!=j)
	{
    my_printf("%d\n",a[i+1]);
	}
	else
	{
		my_printf("No\n");
	}
	}
	else
		my_printf("No\n");
}