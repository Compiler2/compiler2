#include <header.h>

int main_bench()
{
	int a,b,c,d,min,max;
	my_scanf("%d\n%d\n%d",&a,&c,&d);
	min=(d<c)?d:c;
	max=(d>=c)?d:c;
	if(a>2)
	for(;a>=3;a--)
	{ 
		my_scanf("%d",&b);
		if(b>max){min=max;max=b;}
		else if(b>min)min=b;
	
	}
	my_printf("%d\n%d",max,min);
}


