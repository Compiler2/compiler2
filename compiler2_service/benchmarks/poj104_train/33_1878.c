#define NUM_ITER 24338

#include <header.h>

int main_bench()
{
	int n,i,j;
	char a[255];
	 int len;

	my_scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		my_scanf("%s",&a);
		len=strlen(a);
		for(j=0;j<len-1;j++)
		{
			if(a[j]=='A')
			{
                my_printf("T");
			}
			else if(a[j]=='T')
			{
				my_printf("A");
			}
			else if(a[j]=='C')
			{
				my_printf("G");
			}

			else if(a[j]=='G')
			{
				my_printf("C");
			}
		}

		if(a[len-1]=='A')
			{
                my_printf("T\n");
			}
		else if(a[len-1]=='T')
			{
				my_printf("A\n");
			}
		else if(a[len-1]=='C')
			{
				my_printf("G\n");
			}
		else if(a[len-1]=='G')
			{
				my_printf("C\n");
		}
	}

	return 0;

	}