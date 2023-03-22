#include <header.h>

int main_bench()
{
	char a[256],t;
	int i,j,n;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",&a);
	for(j=0;j<strlen(a);j++)
		{
			
			switch(a[j])
			{
			case'A':
				t='T';
				break;
			case'T':
				t='A';
				break;
			case'C':
				t='G';
				break;
			case'G':
				t='C';
				break;
			}
			my_printf("%c",t);
		}
	my_printf("\n");
	}
	
	return 0;
}
