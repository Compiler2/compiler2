#define NUM_ITER 162249

#include <header.h>

int main_bench()
{
	int year=0,month=0,day=0,i,number=0,k,y;
	my_scanf("%d %d %d",&year,&month,&day);
	y=year-1;
	number=y+y/4-y/100+y/400;
	for(i=1;i<month;i++)
	{ 	
	    if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
		    number+=31;	
	    else if(i==4 || i==6 || i==9 || i==11)
		    number+=30;
	    else if(i==2)
		{
		    if(year%400==0 ||(year%4==0 && year%100!=0))
			    number+=29;
	        else
			    number+=28;
		}
	}
	number+=day;
	k=number%7;
	if(k==1) my_printf("Mon.");
    else if(k==2) my_printf("Tue.");
	else if(k==3) my_printf("Wed.");
	else if(k==4) my_printf("Thu.");
	else if(k==5) my_printf("Fri.");
	else if(k==6) my_printf("Sat.");
	else if(k==0) my_printf("Sun.");
	return 0;
}