#include <header.h>


int main_bench()
{
	int n,k,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char w[50];
		my_scanf("%s",w);
		k=strlen(w);
		if(w[k-1]=='g')
		{
			for(j=0;j<k-4;j++)
			{
				my_printf("%c",w[j]);
			}
			my_printf("%c\n",w[k-4]);
		}
		else
		{
			for(j=0;j<k-3;j++)
			{
				my_printf("%c",w[j]);
			}
			my_printf("%c\n",w[k-3]);
		}
	}
	return 0;
	
}
