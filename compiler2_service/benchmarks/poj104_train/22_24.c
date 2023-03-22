#define NUM_ITER 1348031

#include <header.h>

int main_bench()
{
	unsigned int num[300]={0},i=0,j,k,n,t;
	do 
	{
		my_scanf("%d",&num[i]);
		i++;
	}
    while (getchar()==',');
	n=i;
	if (n==1)
		my_printf("No\n");
	else 
	{
		for (i=0;i<n;i++)
		{
			k=i;
			for (j=i+1;j<n;j++)
				if (num[k]<num[j])
					k=j;
			if (k!=i)
			{
				t=num[k];
				num[k]=num[i];
				num[i]=t;
			}
		}
		for (i=1;i<n;i++)
			if (num[i]<num[0])
			{	
				j=i;
			    break;
			}
		if (i==n)
			my_printf("No\n");
		else my_printf("%d\n",num[j]);
	}
}
