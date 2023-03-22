#define NUM_ITER 886675

#include <header.h>

int main_bench()
{
	double k,h=0;
	char a[1000],b[1000];
	int i,n,m;
	my_scanf("%lf",&k);
	my_scanf("%s",a);
	my_scanf("%s",b);
	n=strlen(a);
	m=strlen(b);
	if(n!=m)
		my_printf("error");
	else
	{
	for(i=0;i<n;i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
		{
			my_printf("error");
			break;
		}
		else if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
		{
			my_printf("error");
			break;
		}
		else
		{
			if(a[i]==b[i])
				h++;
		}
	}
	h=h*1.0/n;
	if(h>k)
		my_printf("yes");
	else if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'&&b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
		my_printf("no");
	}
	return 0;
}