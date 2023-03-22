#include <header.h>

int main_bench()
{
	int m,i,j,k,population;
	int sum=0;
	my_scanf("%d\n",&population);
	for(i=0;i<population;i++)
	{
		my_scanf("%d",&m);
		if(m==0)
		my_printf("60\n");
		else
		{	for(j=0;j<m;j++)
		{	my_scanf("%d",&k);
		    if(3*j+3+k<60 )
			{
				sum=57-3*j;
			}
			else if ( 3*j+k<60)
			{
				sum=k;}
		}
		my_printf("%d\n",sum);}
	}
}

		