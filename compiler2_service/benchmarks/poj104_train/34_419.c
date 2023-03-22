#define NUM_ITER 260174

#include <header.h>

int main_bench()
{
	int n,i,j,k,l,a,b;

	my_scanf("%d",&n);
	b=n;
	if(b==1)
	{
		my_printf("End");}

	else for(i=1;i<1000000;i++)
	{
		if(b%2==1)
		{a=b*3+1;
		my_printf("%d*3+1=%d\n",b,a);
		b=a;}
		else if(b%2==0)
		{a=b/2;
		my_printf("%d/2=%d\n",b,a);
		b=a;}
		if(a==1)
		{my_printf("End");
		break;}
	}
	


	return 0;
}
