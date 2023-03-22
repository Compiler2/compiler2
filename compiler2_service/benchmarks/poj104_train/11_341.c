#define NUM_ITER 1306571

#include <header.h>


int main_bench()
{
	int a,b,c;
	my_scanf("%d%d%d",&a,&b,&c);
	if(a%400==0||(a%4==0&&a%100!=0))
	{
		if(b==1)my_printf("%d\n",c);
		else if(b==2)my_printf("%d\n",c+31);
		else if(b==3)my_printf("%d\n",c+31+29);
		else if(b==4)my_printf("%d\n",c+31+29+31);
		else if(b==5)my_printf("%d\n",c+31+29+31+30);
		else if(b==6)my_printf("%d\n",c+31+29+31+30+31);
		else if(b==7)my_printf("%d\n",c+31+29+31+30+31+30);
		else if(b==8)my_printf("%d\n",c+31+29+31+30+31+30+31);
		else if(b==9)my_printf("%d\n",c+31+29+31+30+31+30+31+31);
		else if(b==10)my_printf("%d\n",c+31+29+31+30+31+30+31+31+30);
		else if(b==11)my_printf("%d\n",c+31+29+31+30+31+30+31+31+30+31);
		else my_printf("%d\n",c+31+29+31+30+31+30+31+31+30+31+30);
	}
	else
	{
		if(b==1)my_printf("%d\n",c);
		else if(b==2)my_printf("%d\n",c+31);
		else if(b==3)my_printf("%d\n",c+31+28);
		else if(b==4)my_printf("%d\n",c+31+28+31);
		else if(b==5)my_printf("%d\n",c+31+28+31+30);
		else if(b==6)my_printf("%d\n",c+31+28+31+30+31);
		else if(b==7)my_printf("%d\n",c+31+28+31+30+31+30);
		else if(b==8)my_printf("%d\n",c+31+28+31+30+31+30+31);
		else if(b==9)my_printf("%d\n",c+31+28+31+30+31+30+31+31);
		else if(b==10)my_printf("%d\n",c+31+28+31+30+31+30+31+31+30);
		else if(b==11)my_printf("%d\n",c+31+28+31+30+31+30+31+31+30+31);
		else my_printf("%d\n",c+31+28+31+30+31+30+31+31+30+31+30);
	}
	return 0;
}
