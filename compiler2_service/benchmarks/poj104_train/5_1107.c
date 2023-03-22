#include <header.h>

int main_bench()
{
	char zfc[5][600];
	int i,p,q,sum=0;
	double n,flag;
	my_scanf("%lf",&n);
	for(i=0;i<2;i++)
	{
		my_scanf("%s",zfc[i]);
	}
	p=strlen(zfc[0]);
	q=strlen(zfc[1]);
	if(p!=q)
	{
		my_printf("error\n");
		return 0;
	}
	for(i=0;(zfc[0][i]!='\0')&&(zfc[1][i]!='\0');i++)
	{
		if((zfc[0][i]!='A'&&zfc[0][i]!='G'&&zfc[0][i]!='C'&&zfc[0][i]!='T')||(zfc[1][i]!='A'&&zfc[1][i]!='G'&&zfc[1][i]!='C'&&zfc[1][i]!='T'))
		{
			my_printf("error\n");
			return 0;
		}
		if(zfc[0][i]==zfc[1][i])
		{
			sum++;
		}
	}
	flag=1.0*sum/p;
	if(flag>n)
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
	return 0;
}