#include <header.h>

int main_bench()
{
	int a,b,i;
	my_scanf("%d",&a);
	a=a+12;
	for(i=1;i<=12;i++)
	{
		b=a%7;
		if(b==5)
			my_printf("%d\n",i);
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			a=a+31;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			a=a+30;
		}
		else 
		{
			a=a+28;
		}
	}	
	return 0;
}