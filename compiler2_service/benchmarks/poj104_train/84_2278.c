#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i;
	int j[n];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&j[i]);
	}
	int M1, M2;
	M1 = 0;
	M2 = 0;
	for(i=0;i<n;i++)
	{
		if(j[i]>=M1)
			M1=j[i];
		else 
			M1=M1;
	}
	for(i=0;i<n;i++)
	{
		if(j[i]>=M2&&j[i]<M1)
			M2=j[i];
		else 
			M2=M2;
	}
	my_printf("%d\n%d\n",M1,M2);


	return 0;
}

