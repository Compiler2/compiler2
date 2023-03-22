#define NUM_ITER 891239

#include <header.h>

int main_bench()
{
    char a[501],b[501];
	int i,k,l=0;
	k=0;
	double d;
	my_scanf("%lf",&d);
	my_scanf("%s",a);
	my_scanf("%s",b);
	if(strlen(a)!=strlen(b))
	{
		k=1;
		my_printf("error");
	}
	if(strlen(a)==strlen(b))
	{
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==b[i])
				l++;
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'))
			{
				k=1;
				my_printf("error");
				break;
			}
		}
	}
	if(k==0)
	{
		if((1.0*l/strlen(a))>=d)
			my_printf("yes");
		else
			my_printf("no");
	}
	return 0;
}
