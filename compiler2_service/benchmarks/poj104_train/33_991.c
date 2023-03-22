#include <header.h>

int main_bench()
{
    int n;
	my_scanf("%d",&n);
	int i;
	char a[2000];
	for(i=0;i<=n;i++)
	{
       gets(a);
int j;
	   for(j=0;j<strlen(a);j++)
		{
			switch(a[j])
			{
			case 'A':
				a[j]='T';
				break;
			case 'T':
				a[j]='A';
				break;
				case 'C':
				a[j]='G';
				break;
				case 'G':
				a[j]='C';
				break;
			}
		}
		int k;
		for(k=0;k<strlen(a);k++)
		{
			my_printf("%c",a[k]);
		}
		my_printf("\n");
	}
	return 0;
}
