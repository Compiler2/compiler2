#include <header.h>

int main_bench()
{
	int n,i,len;
	char *p;
	char str[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",str);
		len=strlen(str);
		p=&str[len-1];
		if(*p=='g')
		{
			p=&str[len-3];
			*p='\0';
			my_printf("%s\n",str);
		}
		else
		{
            p=&str[len-2];
			*p='\0';
			my_printf("%s\n",str);
		}
	}
	return 0;
}

