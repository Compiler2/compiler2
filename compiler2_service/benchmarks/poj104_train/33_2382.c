#define NUM_ITER 15295

#include <header.h>

int main_bench()
{
	int n,count;
	char a[300];
	my_scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		
		my_scanf("%s", a);
		for (int m=0;m<strlen(a);m++)
		{
			if(a[m]=='A')
				my_printf("T");
			if(a[m]=='T')
				my_printf("A");
			if(a[m]=='C')
				my_printf("G");
			if(a[m]=='G')
				my_printf("C");
		}
		my_printf("\n");
	}
	return 0;
}