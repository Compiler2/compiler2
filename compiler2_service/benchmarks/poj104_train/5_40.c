#include <header.h>

int main_bench()
{
	double n;
	my_scanf("%lf",&n);
	char a[502],b[502];
	int l1,l2;
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	l1=strlen(a);
	l2=strlen(b);
	int i,k=0,flag;
	for(i=0;i<l1;i++)
		if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')
		{flag=1;}
	for(i=0;i<l1;i++)
		if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')
		{flag=1;}
	if(l1!=l2||flag==1)
	{
		my_printf("error");
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(a[i]==b[i])
			{k++;}
		}
		if(1.0*k/l1>=n)
		{
			my_printf("yes");
		}
		else 
			my_printf("no");
	}
	return 0;                               
}