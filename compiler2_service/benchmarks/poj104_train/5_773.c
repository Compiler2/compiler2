#define NUM_ITER 925658

#include <header.h>

int main_bench()
{
	int i,j,k,a=0,l=0;
	double m,n;
	char zf[2][10000];
	my_scanf("%lf",&m);
	my_scanf("%s",zf[0]);
	my_scanf("%s",zf[1]);
	j=strlen(zf[0]);
	k=strlen(zf[1]);
	for(i=0;zf[0][i]!='\0'&&zf[1][i]!='\0';i++)
	{
		if((zf[0][i]>'a'&&zf[0][i]<'z')||(zf[1][i]>'a'&&zf[1][i]<'z'))
		{
			l++;
		}
	}
	if(j!=k||l>0)
	{
		my_printf("error");
	}else
	{
		for(i=0;zf[0][i]!='\0';i++)
		{
			if(zf[0][i]==zf[1][i])
			{
				a=a+1;
			}
		}
			n=1.0*a/j;
			if(n>=m)
			{
				my_printf("yes");
			}else
			{
				my_printf("no");
			}
	}

	return 0;
}