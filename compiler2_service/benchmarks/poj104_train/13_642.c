#include <header.h>

int main_bench()
{
	int a[20000],k,j,b,c,d,e,f,i;
	my_scanf("%d",&b);
	for(i=0;i<b;i++)
	{my_scanf("%d",&a[i]);}
	my_printf("%d",a[0]);
	for(j=1;j<b;j++)
	{for(k=0;k<j;k++)
	{if(a[k]==a[j])break;}
	if(k==j)my_printf(" %d",a[j]);}
	return 0;
}