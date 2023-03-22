#define NUM_ITER 1355270

#include <header.h>

int main_bench()
{
	
	char a[102];

	int i,ch,j;
	gets(a);
	ch=strlen(a);
	int shu[102];
	int m=0;
	for(i=0;i<ch;i++)
	{
		if(a[i]>'z'||a[i]<'A')
		{
			a[i]=100;
			m++;
			shu[m]=i;
		}
	}
	if(m!=0)
	{
	for(i=shu[m]+1;i<ch;i++)
	{
		my_printf("%c",a[i]);
	}
	my_printf(" ");
	for(i=m-1;i>=1;i--)
	{
		for(j=shu[i]+1;j<shu[i+1];j++)
		{
			my_printf("%c",a[j]);
		}
		my_printf(" ");
	}
	for(i=0;i<shu[1];i++)
	{
		my_printf("%c",a[i]);
	}
	}
	else
	my_printf("%s",a);

	return 0;
}
