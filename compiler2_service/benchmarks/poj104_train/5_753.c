#define NUM_ITER 1000633

#include <header.h>

int main_bench()
{
	int i,l1,l2,n=0;
	double e;
	char a[500],b[500];
	my_scanf("%lf%s%s",&e,a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
	{
		my_printf("error");
		return 0;
	}
	for(i=0;i<l1;i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'||b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')
		{
			my_printf("error");
		    return 0;
		}else
		{
			if(a[i]==b[i])
			{
				n++;
			}
		}
	}
	if(1.0*n/l1>e)
	{
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}