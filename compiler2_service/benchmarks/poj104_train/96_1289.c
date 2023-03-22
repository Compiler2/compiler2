#include <header.h>

int main_bench()
{
	char a[200],b[200],c;
	int i=0,r=0,flag=0;
	my_scanf("%c",&c);
	while(c!='\n')
	{
		a[i]=c;
		i++;
		my_scanf("%c",&c);
	}
	a[i]='!';
	i=0;
	while(a[i]!='!')
	{
		b[i]=(r*10+a[i]-'0')/13+'0';
		r=(r*10+a[i]-'0')%13;
		i++;
	}
	b[i]='!';
	i=0;
	do
	{
		if(flag==0)
		{
			if(b[i]>='1'&&b[i]<='9')
			{
				my_printf("%c",b[i]);
				flag=1;
			}
		}
		else
		{
			my_printf("%c",b[i]);
		}
		i++;
	}while(b[i]!='!');
	if(flag==0)
	{
		my_printf("0");
	}
	my_printf("\n%d",r);
}
