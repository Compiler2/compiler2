#include <header.h>

int main_bench()
{
	int n,j,k;
	char a[300],in;
	my_scanf("%d",&n);
	my_scanf("%c",&in);
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=299;j++)
		{
			my_scanf("%c",&a[j]);
			if(a[j]==10)
			{
				k=j;
				break;
			}
		}
		for(j=1;j<=k-1;j++)
		{
			if(a[j]=='A')my_printf("T");
			if(a[j]=='C')my_printf("G");
			if(a[j]=='G')my_printf("C");
			if(a[j]=='T')my_printf("A");
		}
		my_printf("\n");
	}
	return 0;
}



		

