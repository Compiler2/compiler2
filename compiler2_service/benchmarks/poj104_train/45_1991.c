#include <header.h>

int main_bench()
{
	char a[52];
	char b[52];
    int i=0;
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(int c=0;c<strlen(b);c++)
	{
			if(a[0]==b[c])
			{
				for(int n=0;n<strlen(a);n++)
				{
				    if(a[n]==b[c+n])
					{
						i++;
					}
				}
			if(i==strlen(a))
			{
				my_printf("%d",c);
			}
			}

	}
	return 0;
}
