#define NUM_ITER 594878

#include <header.h>

int main_bench()
{
	int month[13];
	int day,n=0,i,d;
	my_scanf("%d",&day);
	for(i=1;i<=12;i++)
	{   month[0]=0;
		if(i==2)
		{  
			month[i]=28;
		}

		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
		   month[i]=31;
		}
		if(i==4||i==6||i==9||i==11)
		{
			month[i]=30;
		}
	    n+=month[i-1];	
		d=((((n+13)%7)+day)%7)-1;
		if(d==5)
		{
			my_printf("%d\n",i);
		}
	}
	
	
	return 0;
}
