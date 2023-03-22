#define NUM_ITER 1015239

#include <header.h>

int main_bench()
{
    char a[501];
	char b[501];
	int i,n,j,k;
	float v;
	j=0;
	k=0;
	n=0;
	my_scanf("%f",&v);
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		j=j+1;
		if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))
		{
			my_printf("error");
			return 0;
		}
	}
	for(i=0;b[i]!='\0';i++)
	{
		k=k+1;
		if((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G'))
		{
			my_printf("error");
			return 0;
		}
	}
	if(j!=k)
	{
		my_printf("error");
		return 0;
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])
		{
			n=n+1;
		}
	}
	if(v*j<n)
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
	return 0;
}