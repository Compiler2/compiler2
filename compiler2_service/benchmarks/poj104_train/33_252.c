#include <header.h>



int main_bench()
{
	int n;
	my_scanf("%d",&n);
	while (n--)
	{
		char a[500];
		my_scanf("%s",&a);
		int LL = strlen(a);
		for (int i=0; i<LL;i++ )
		{
			if (a[i]=='A')
				my_printf("T");
			if (a[i]=='T')
				my_printf("A");
			if (a[i]=='G')
				my_printf("C");
			if (a[i]=='C')
				my_printf("G");
		}
		my_printf("\n");
	}
	return 0;
}