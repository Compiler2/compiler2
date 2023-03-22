#include <header.h>

int main_bench()
{
	double m,aver;
	int n,i,j,k=0,l=0;
	char a[500],b[500];
	my_scanf("%lf",&m);
	my_scanf("%s",a);
	my_scanf("%s",b);
	if(strlen(a)!=strlen(b))
	{
		k++;
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'&&b[i]!='A'&&b[i]!='C'&&b[i]!='T'&&b[i]!='G')
		{
		k++;
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[i])
		{
			l++;
		}
		
	}
	aver=1.0*l/strlen(a);
	if(k!=0)
	{
		my_printf("error");
	}
	if(k==0)
	{
		if(aver>m)
		{
		my_printf("yes");
		}
		else
		{
		my_printf("no");
		}
	}
	return 0;
}
