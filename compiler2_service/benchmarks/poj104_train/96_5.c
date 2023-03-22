#include <header.h>

int main_bench()
{
	char a[101];
	char b[101];
	int i,n,m,l;
	gets(a);
	l=strlen(a);
	n=0;
	for(i=0;i<l;i++)
	{
		b[i]=(n*10+a[i]-'0')/13+'0';
		n=(n*10+a[i]-'0')%13;
	}
	if(l==1)
		my_printf("0");
	else if(l<=2&&((a[0]-'0')*10+a[1]-'0')<=13)
		my_printf("0");
	else
	{
		if(((a[0]-'0')*10+a[1]-'0')>=13)
		{
			for(i=1;i<l;i++)
				my_printf("%c",b[i]);
		}
		else
		{
			for(i=2;i<l;i++)
				my_printf("%c",b[i]);
		}
	}
	my_printf("\n");
	my_printf("%d",n);

		
}