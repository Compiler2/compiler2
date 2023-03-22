#include <header.h>

int main_bench()
{
	int n,i,r,j,k;
	char a[1000]={0};
	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf ("%s",&a);
		for (j=0;j<255;j++)
		{
			if (a[j]=='A')
			{
				my_printf("T");
			}
			if (a[j]=='T')
			{
				my_printf("A");
			}
	 		if (a[j]=='G')
			{
				my_printf("C");
			}
			if (a[j]=='C')
			{
				my_printf("G");
			}
			if (a[j]==0)
			{
				break;
			}
		}
		my_printf ("\n");
	}
	return 0;
}