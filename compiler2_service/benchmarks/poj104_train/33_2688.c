#define NUM_ITER 25990

#include <header.h>

int main_bench()
{
	int n,i,j,m;
	char a[256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a);
		m=strlen(a);
		for(j=0;j<m;j++)
		{
			if(a[j]=='A')
				my_printf("T");
			if(a[j]=='T')
				my_printf("A");

			if(a[j]=='C')
				my_printf("G");

			if(a[j]=='G')
				my_printf("C");
		}
		my_printf("\n");
	}
	return 0;
}