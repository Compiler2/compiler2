#include <header.h>


int main_bench()
{
    int m;
	my_scanf("%d",&m);
    int a,b,c,d,e,f,g,h,i,j;
	a=m/100;
	my_printf("%d\n",a);
	b=m-a*100;
	if(b<50)
    {c=0;
	my_printf("%d\n",c);
    d=b/20;
    my_printf("%d\n",d);
    e=b-d*20;
	f=e/10;
	my_printf("%d\n",f);
	g=e-f*10;
	h=g/5;
	my_printf("%d\n",h);
	i=g-h*5;
	j=i/1;
	my_printf("%d\n",j);
    }
	else
	{
    c=1;
	my_printf("%d\n",c);
    d=(b-50)/20;
    my_printf("%d\n",d);
    e=b-50-d*20;
	f=e/10;
	my_printf("%d\n",f);
	g=e-f*10;
	h=g/5;
	my_printf("%d\n",h);
	i=g-h*5;
	j=i/1;
	my_printf("%d\n",j);
    }
    
	return 0;
}

