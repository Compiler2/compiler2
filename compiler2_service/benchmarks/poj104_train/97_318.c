#define NUM_ITER 1330548

#include <header.h>


int main_bench()
{
    int k;
	my_scanf("%d",&k);
	int a=0,b=0,c=0,d=0,e=0,f=0;
	if((k/100)!=0)
	{
       a=k/100;
       k=k-a*100;	
	}
	if((k/50)!=0)
	{
		b=k/50;
		k=k-b*50;
	}
	if((k/20)!=0)
	{
		c=k/20;
		k=k-c*20;
	}
	if((k/10)!=0)
	{
		d=k/10;
		k=k-d*10;
	}
	if((k/5)!=0)
	{
		e=k/5;
		k=k-e*5;
	}
	if(k!=0)
	{
		f=k;
	}
	my_printf("%d\n",a);
    my_printf("%d\n",b);
    my_printf("%d\n",c);		
    my_printf("%d\n",d);		
    my_printf("%d\n",e);		
    my_printf("%d\n",f);
return 0;
}
