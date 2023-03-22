#include <header.h>

int main_bench()
{
	char str[3000];
	int i,j=0,k;
	char *p;
	gets(str);
	p=str;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{
			j++;k=0;
		}
		else if(k==0)
		{
			my_printf("%d,",j);
			k=1;j=0;
		}
	}
	my_printf("%d\n",j);
}