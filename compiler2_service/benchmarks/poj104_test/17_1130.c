#define NUM_ITER 1843654

#include <header.h>

int main_bench()
{
	char a[110];
	int i,j,l;
	while(my_scanf("%s",a)==1)
	{
		my_printf("%s\n",a);
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]!='('&&a[i]!=')') a[i]=' ';
		}
		for(i=1;i<l;i++)
		{
			if(a[i]==')')
			{
				for(j=i-1;j>=0;j--)
				{
					if(a[j]=='(')
					{
						a[i]=' ';
						a[j]=' ';
						break;
					}
				}
			}
		}
		for(i=0;i<l;i++)
		{
			if(a[i]=='(') my_printf("$");
			if(a[i]==')') my_printf("?");
			if(a[i]==' ') my_printf(" ");
		}
		my_printf("\n");
	}
	return 0;
}
