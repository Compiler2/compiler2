#define NUM_ITER 9294

#include <header.h>


int main_bench()
{
	int n,age[100],i,j;
	char id[100][11],str[11];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s%d",id[i],&age[i]);
	}
	for(i=110;i>=60;i--)
	{
		for(j=0;j<n;j++)
		{
			if(age[j]==i)
			{
				my_printf("%s\n",id[j]);
				age[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(age[i]!=0)
			my_printf("%s\n",id[i]);	
	}
	return 0;
}
