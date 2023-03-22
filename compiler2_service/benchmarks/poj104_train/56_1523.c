#include <header.h>

int main_bench()
{
    int a;
	my_scanf("%d",&a);
    if (a<10)
		my_printf("%d",a);
    else if (a<100)
	    my_printf("%d",10*(int)(a-10*(int)(a/10))+(int)(a/10));
	else if (a<1000)
	    my_printf("%d",100*(int)(a-10*(int)(a/10))+10*(int)((a-100*(int)(a/100))/10)+(int)(a/100));
	else if (a<10000)
	    my_printf("%d",1000*(int)(a-10*(int)(a/10))+100*(int)((a-100*(int)(a/100))/10)+10*(int)((a-1000*(int)(a/1000))/100)+(int)(a/1000));
	else if (a<100000)
	    my_printf("%d",10000*(int)(a-10*(int)(a/10))+1000*(int)((a-100*(int)(a/100))/10)+100*(int)((a-1000*(int)(a/1000))/100)+10*(int)((a-10000*(int)(a/10000))/1000)+(int)(a/10000));
}
