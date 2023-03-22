#define NUM_ITER 1397548

#include <header.h>

int main_bench()
{
	int a,b,n;
	char c;
	a=0,b=0;

	do{

			my_scanf("%d",&n);
			my_scanf("%c",&c);
			if(n>b)
			{
				a=b;
				b=n;}
			else if(n>a&&n<b)
			{
				a=n;}
	}while(c==',');
	if(a==0)
		my_printf("No\n");
	else
		my_printf("%d",a);
	return 0;
}
