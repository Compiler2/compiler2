#include <header.h>

int main_bench()
{
	int i,j,l;
	double n;
	double k;
	my_scanf("%lf",&n);
	char a[1000],b[1000];
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;i<=strlen(a)-1;i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')
		{
			my_printf("error");
		    return 0;
		}
	}
	for(i=0;i<=strlen(a)-1;i++)
	{
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')
		{
			my_printf("error");
			return 0;
		}
	}
	k=0;
	for(i=0;i<=strlen(a)-1;i++)
	{
		if(a[i]==b[i])
			k++;
	}
	k=k/(strlen(a));
	if(k>=n)
		my_printf("yes");
	else
		my_printf("no");
	return 0;
}

