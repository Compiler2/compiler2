#define NUM_ITER 1357046

#include <header.h>

int main_bench()
{
	char a[30];
	gets(a);
	int i,m=strlen(a);
	for(i=0;i<m-1;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		my_printf("%c",a[i]);
		else
		{
			if(a[i+1]>='0'&&a[i+1]<='9')
			my_printf("\n");
		}
	}
	if(a[m-1]>='0'&&a[m-1]<='9')
	my_printf("%c",a[i]);
	return 0;
}