#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	my_scanf("%d",&a);
		if(a<10)
			my_printf("%d",a);
		else
			if(a>=10&&a<100){
                b=a/10+(a-a/10)*10;
			my_printf("%d",b);
			}
			else
				if(a>=100&&a<1000){
				c=a/100+(a/10-(a/100)*10)*10+(a-(a/10)*10)*100;
			my_printf("%d",c);
				}
			else
				if(a>=1000&&a<10000){
				d=a/1000+(a/100-(a/1000)*10)*10+(a/10-(a/100)*10)*100+(a-(a/10)*10)*1000;
			my_printf("%d",d);
				}
            else
			    if(a>=10000){
				e=a/10000+(a/1000-(a/10000)*10)*10+(a/100-(a/1000)*10)*100+(a/10-(a/100)*10)*1000+(a-(a/10)*10)*10000;
            my_printf("%d",e);
			}
	return 0;
}

