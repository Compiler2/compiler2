#include <header.h>


int main_bench()
{
	int a,b,c;
	a=b=c=0;
	int n;
	my_scanf("%d",&n);
	a=n/100;
	b=n/10-a*10;
	c=n-a*100-b*10;
	my_printf("%d\n",a);
	if(b==9)
	{
	my_printf("%d\n",1);
	my_printf("%d\n",2);
	my_printf("%d\n",0);

	
	}
	else	if(b==8)
	{
	my_printf("%d\n",1);
	my_printf("%d\n",1);
	my_printf("%d\n",1);

	
	}
	else		if(b==7)
	{
	my_printf("%d\n",1);
	my_printf("%d\n",1);
	my_printf("%d\n",0);

	
	}
	else			if(b==6)
	{
	my_printf("%d\n",1);
	my_printf("%d\n",0);
	my_printf("%d\n",1);

	
	}
	else				if(b==5)
	{
	my_printf("%d\n",1);
	my_printf("%d\n",0);
	my_printf("%d\n",0);

	
	}
	else	if(b==4)
	{
	my_printf("%d\n",0);
	my_printf("%d\n",2);
	my_printf("%d\n",0);

	
	}
	else	if(b==3)
	{
	my_printf("%d\n",0);
	my_printf("%d\n",1);
	my_printf("%d\n",1);

	
	}
	else if(b==2)
	{
	my_printf("%d\n",0);
	my_printf("%d\n",1);
	my_printf("%d\n",0);

	
	}
	else if(b==1)
	{
	my_printf("%d\n",0);
	my_printf("%d\n",0);
	my_printf("%d\n",1);

	
	}
	else if(b==0)
	{
	my_printf("%d\n",0);
	my_printf("%d\n",0);
	my_printf("%d\n",0);

	
	}
    if(c>=5)
	{
		my_printf("%d\n",1);
		c=c-5;
		my_printf("%d\n",c);

	
	}
	else	{	my_printf("%d\n",0);		my_printf("%d\n",c);}

	return 0;
}
