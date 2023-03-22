#include <header.h>

int main_bench()
{
	int a,b,i;
	char c=',';
	a=-1;
	b=1;
	while(c==',')
	{
		my_scanf("%d%c",&i,&c);
		if(i>a)
		{
			b=a;
			a=i;
		}
		else if((i<a)&&(i>b))
			b=i;
	}
	if(b==-1)
		my_printf("No\n");
	else
		my_printf("%d\n",b);
	return 0;
}