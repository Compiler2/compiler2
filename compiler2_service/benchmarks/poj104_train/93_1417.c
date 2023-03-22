#include <header.h>

int main_bench()
{
	int a,b=3,c=5,d=7;
	char n='n';
	my_scanf("%d",&a);

		if(a%3==0&&a%5==0&&a%7==0)
			my_printf("%d %d %d",b,c,d);
        if(a%3!=0&&a%5==0&&a%7==0)
			my_printf("%d %d",c,d);
		if(a%3==0&&a%5!=0&&a%7==0)
			my_printf("%d %d",b,d);
		if(a%3==0&&a%5==0&&a%7!=0)
			my_printf("%d %d",b,c);
		if(a%3!=0&&a%5!=0&&a%7==0)
			my_printf("%d",d);
		if(a%3!=0&&a%5==0&&a%7!=0)
			my_printf("%d",c);
		if(a%3==0&&a%5!=0&&a%7!=0)
			my_printf("%d",b);
		if(a%3!=0&&a%5!=0&&a%7!=0)
			my_printf("%c",n);
		return 0;
	
}
