#include <header.h>

int main_bench()
{
	int i,n,m,j;
	double x,y,z,std;
	x=1.0;
	char aa[1000];
	char bb[1000];
	my_scanf("%lf",&std);
	my_scanf("%s",aa);
	my_scanf("%s",bb);
	n=strlen(aa);
	m=strlen(bb);
	if(m!=n)
	{
		my_printf("error");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		if((aa[i]!='A')&&(aa[i]!='T')&&(aa[i]!='G')&&(aa[i]!='C')&&(bb[i]!='A')&&(bb[i]!='T')&&(bb[i]!='C')&&(bb[i]!='G'))
		{
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(aa[i]==bb[i])
		{
			x=x+1;
		}
	}
	y=n*1.0;
	z=x/y;
	if(z>std)
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
	return 0;
}