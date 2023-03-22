#include <header.h>


int main_bench()
{
	int year,month,day;
	my_scanf("%d%d%d",&year,&month,&day);
	if(year%4!=0||(year%100==0&&year%400!=0))
	{if (month==1)
		my_printf("%d",day);
	else if(month==2)
		my_printf("%d",day+31);
    else if(month==3)
	    my_printf("%d",day+59);
	else if(month==4)
		my_printf("%d",day+90);
    else if(month==5)
		my_printf("%d",day+120);
    else if(month==6)
	    my_printf("%d",day+151);
	else if(month==7)
		my_printf("%d",day+181);
    else if(month==8)
		my_printf("%d",day+212);
    else if(month==9)
	    my_printf("%d",day+242);
	else if(month==10)
		my_printf("%d",day+273);
    else if(month==11)
		my_printf("%d",day+304);
    else if(month==12)
		my_printf("%d",day+334);
}
	else 
{if (month==1)
		my_printf("%d",day);
	else if(month==2)
		my_printf("%d",day+31);
    else if(month==3)
	    my_printf("%d",day+59+1);
	else if(month==4)
		my_printf("%d",day+90+1);
    else if(month==5)
		my_printf("%d",day+120+1);
    else if(month==6)
	    my_printf("%d",day+151+1);
	else if(month==7)
		my_printf("%d",day+182);
    else if(month==8)
		my_printf("%d",day+213);
    else if(month==9)
	    my_printf("%d",day+243);
	else if(month==10)
		my_printf("%d",day+274);
    else if(month==11)
		my_printf("%d",day+305);
    else if(month==12)
		my_printf("%d",day+335);
}

	
	return 0;
}

