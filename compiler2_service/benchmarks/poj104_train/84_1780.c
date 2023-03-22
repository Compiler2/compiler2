#define NUM_ITER 66229

#include <header.h>

int main_bench()
{
	int a,i,b,first,second,c,d;
	my_scanf("%d",&a);
	my_scanf("%d%d",&c,&d);
	if (c>d)
		first=c;
	    second=d;
	if (c<d)
		first=d;
	    second=c;
    for(i=3;i<=a;i++)
	{
        my_scanf("%d",&b);
		if(b>first)
		{
			second=first;
			first=b;
		}
		else if(b>second)
			second=b;
	}
	my_printf("%d\n%d",first,second);
	return 0;
}
