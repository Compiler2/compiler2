#include <header.h>

int main_bench()
{
	char a[101];
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ')
			my_printf("%c",a[i]);
		else
		{
			do
			{
				i+=1;
			}
			while(a[i]==' ');
			i=i-1;
			my_printf(" ");
		}
	}
return 0;
}
