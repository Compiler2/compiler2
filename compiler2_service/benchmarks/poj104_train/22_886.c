#include <header.h>

int main_bench()
{
	int i,max1,max2,t,x,j;
	char c;
	x=-999;
	j=0;
	max1=max2=0;
	for(i=0;i<300;i++)
	{
		my_scanf("%d",&t);
		my_scanf("%c",&c);
		if(t==x)
			j=j+1;
		if(t>max1)
		{
			max2=max1;
			max1=t;
		}
		else if(t<max1&&t>max2)
			max2=t;
		x=t;
		if(c=='\n')
			break;
	}
	if(i<=1)
		my_printf("No");
	else if(i==j)
		my_printf("No");
	else
		my_printf("%d",max2);
	return 0;
}