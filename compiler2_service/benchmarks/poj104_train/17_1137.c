#define NUM_ITER 17483

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d\n",&n);
	char a[200];
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a);
		my_printf("%s\n", a);
		int j;
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]==')')
			{
				int s;
				for(s=j-1;s>=0;s--)
				{
					if(a[s]=='(')
					{
						a[s]=' ';
						a[j]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]==')')
				my_printf("?");
			else if(a[j]=='(')
				my_printf("$");
			else
				my_printf(" ");
		}
		my_printf("\n");
	}
	return 0;
}