#include <header.h>

int main_bench()
{
	int n;
	char a[100],b[100],c[100];
	my_scanf("%s",a);
	my_scanf("%s",b);
	my_scanf("%s",c);
	n = strlen(b);
	int i = 0;
	while(a[i]!='\0')
	{
		int m = 0;
		while(m<n)
		{
			if (a[i+m] == b[m])
				m++;
			else
				break;
		}
		if(m == n)
		{
			int p = 0;
			while(p<i)
			{
				my_printf("%c",a[p]);
				p++;
			}
			my_printf("%s",c);
			p = p + n;
			while(a[p] != '\0')
			{
				my_printf("%c",a[p]);
				p++;
			}
			break;
		}
	i++;
	}
	if(a[i] == '\0')
		my_printf("%s",a);
	return 0;
}