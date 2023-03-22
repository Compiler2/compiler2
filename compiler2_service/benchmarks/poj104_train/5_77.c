#include <header.h>

int main_bench()
{
	char a[500],b[500];
	int i,len,n=0,x,y;
	double m,p;
	my_scanf("%lf",&m);
	my_scanf("%s%s",a,b);
	x=strlen(a);
	y=strlen(b);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>'Z'||a[i]<'A')
		{
			my_printf("error");
			return 0;}
	}
	if(x!=y)
		my_printf("error");
	else
	{
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if(a[i]==b[i])
			{
				n++;
			}
		}
	
	p=(double)n/len;
	if(p>m)
	{
		my_printf("yes");
	}
	else if(p<=m)
		my_printf("no");
	}
	return 0;
}

