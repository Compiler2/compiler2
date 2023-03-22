#define NUM_ITER 32148

#include <header.h>

int main_bench()
{
	int i,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[30];
		my_scanf("%s",a);
		int b;
		b=strlen(a);
		if(a[b-2]=='e')
		{
			int j;
			for(j=0;j<b-2;j++)
				my_printf("%c",a[j]);
			my_printf("\n");
		}
		if(a[b-2]=='l')
		{
			int j;
			for(j=0;j<b-2;j++)
				my_printf("%c",a[j]);
			my_printf("\n");
		}if(a[b-3]=='i' && a[b-2]=='n')
		{
			int j;
			for(j=0;j<b-3;j++)
				my_printf("%c",a[j]);
			my_printf("\n");
		}
	}
	return 0;
}