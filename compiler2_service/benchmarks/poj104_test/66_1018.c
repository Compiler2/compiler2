#define NUM_ITER 67446

#include <header.h>



int fun2(int a)
{
	if((a%400==0)||(a%4==0 && a%100!=0))
		return 1;
	return 0;
	
}
int fun3(int a ,int b)
{
	switch(a)
	{
	case 1:
	case 3:
    case 5:
	case 7:
	case 8:
	case 10:
	case 12: return 3;
	case 2:  if((b%400==0)||(b%4==0 && b%100!=0))
		      return 1;
	         else
		      return 0;
	default: return 2;
	}
}
void print(int a)
{
	switch(a)
	{
	case 1: my_printf("Mon.\n");break;
    case 2: my_printf("Tue.\n");break;
	case 3: my_printf("Wed.\n");break;
	case 4: my_printf("Thu.\n");break;
	case 5: my_printf("Fri.\n");break;
	case 6: my_printf("Sat.\n");break;
	case 0: my_printf("Sun.\n");break;
		

	}
}
int main_bench()
{
	
	
	int year,month,day;
	int i;
    int d=0;
	
	my_scanf("%d%d%d",&year,&month,&day);
	for(i=(year-(year-1)%400);i<year;i++)
		if(fun2(i))
			d+=2;
		else
			d+=1;
	for(i=1;i<month;i++)
		d+=fun3(i,year);
     d+=day;
	d%=7;
	print(d);
	
}