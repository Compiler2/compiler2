#define NUM_ITER 916499

#include <header.h>

int main_bench()
{
    int i,j,k=0,l,m,n;
	double s,z;
	char a[500],b[500];
	my_scanf("%lf",&s);
	my_scanf("%s",a);
	my_scanf("%s",b);
	l=strlen(a);
	j=strlen(b);
	if(l!=j)
	{
		my_printf("error\n");
		return 0;
	}
	for(i=0;i<l;i++)
	{
		if((a[i]!='A' && a[i]!='T' && a[i]!='C' && a[i]!='G')||(b[i]!='A' && b[i]!='T' && b[i]!='C' && b[i]!='G'))
		{
			my_printf("error\n");
			return 0;
		}
		if(a[i]==b[i])
		{
			k++;
		}
	}
    z=(double)k/l;
	if(z>=s)
	{
		my_printf("yes\n");
	}
	else
	{
		my_printf("no\n");
	}
	return 0;
}

