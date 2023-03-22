#include <header.h>

int main_bench()
{
	int a,b=3,c=5,d=7;
	my_scanf("%d",&a);
    if(a%b==0&&a%c==0&&a%d==0)
		my_printf("%d %d %d",b,c,d);
	else if(a%b==0&&a%c==0&&a%d!=0)
        my_printf("%d %d",b,c);
	else if(a%b==0&&a%d==0&&a%c!=0)
        my_printf("%d %d",b,d);
	else if(a%c==0&&a%d==0&&a%b!=0)
        my_printf("%d %d",c,d);
	else if(a%b==0&&a%c!=0&&a%d!=0)
		my_printf("%d",b);
    else if(a%c==0&&a%d!=0&&a%b!=0)
		my_printf("%d",c);
	else if(a%d==0&&a%c!=0&&a%b!=0)
		my_printf("%d",d);
	else 
	my_printf("n");
	return 0;
}

