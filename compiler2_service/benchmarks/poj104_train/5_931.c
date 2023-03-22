#define NUM_ITER 862060

#include <header.h>

int main_bench()
{
	int n,i,j,k,s[100]={0},m,l=0;
	char a[256][256],b[256];
	double c,d=0,e=0;
	my_scanf("%lf",&c);
	my_scanf("%s",a[1]);
	my_scanf("%s",a[0]);
	if(strlen(a[1])==strlen(a[0]))
	{
	for(i=0;a[0][i]!='\0';i++)
	{
		if((a[0][i]!='A'&&a[0][i]!='T'&&a[0][i]!='C'&&a[0][i]!='G')||(a[1][i]!='A'&&a[1][i]!='T'&&a[1][i]!='C'&&a[1][i]!='G'))
		{
			my_printf("error");
			e=0;
			break;
		}
		else
		{
		d++;
		if(a[0][i]==a[1][i])
		{
			e++;
		}
		}
	}
	if(d==strlen(a[0]))
	{
	if(c<(e/d))
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
	}
	}
	else
	{
		my_printf("error");
	}
	return 0;
}
	