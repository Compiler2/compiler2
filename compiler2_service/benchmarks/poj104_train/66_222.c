#define NUM_ITER 492725

#include <header.h>




int main_bench()
{
	int a,b,c,e=0,t,i;
	my_scanf("%d %d %d",&a,&b,&c);
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    e=a%7+a/4-a/100+a/400;
	for(i=1;i<b;i++)
	{
		e=e+days[i];
	}
		e=e+c-1;
	
	if((a%4==0&&a%100!=0||a%400==0)&&(b<=2))
	{
		e--;
	}
     t=e%7;
	if(t==0)
		my_printf("Sun.\n");
else if(t==1)
		my_printf("Mon.\n");
else if(t==2)
		my_printf("Tue.\n");
else if(t==3)
		my_printf("Wed.\n");
else if(t==4)
		my_printf("Thu.\n");
else if(t==5)
		my_printf("Fri.\n");
else if(t==6)
		my_printf("Sat.\n");

	

                    
	return 0;
}

