#define NUM_ITER 1264

#include <header.h>


int main_bench()
{
	int n,i,j;
	char d[300];
	my_scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=256;j++)
		{
			d[j]=0;
		}
		gets(d);
		j=0;
		while (d[j]!=0)
		{
			switch (d[j])
			{
			case 'A':
					my_printf("T");
					break;
			case 'T':
					my_printf("A");
					break;
			case 'C':
					my_printf("G");
					break;
			case 'G':
					my_printf("C");
					break;
			}
			j++;
		}
		my_printf("\n");
	}
	return 0;
}
