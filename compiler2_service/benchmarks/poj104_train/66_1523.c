#include <header.h>

int main_bench()
{
	int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,j,k;
	int m,n=0;
	int a,b,c;
	my_scanf("%d%d%d",&a,&b,&c);
	
	if(a%4==0&&a%100!=0||a%400==0)
	{
		m=(a-1+a/4-a/100+a/400)%7;
		for(i=1;i<b;i++)
		    n+=day[i];
		n=n+c;
		if(b>=3)
		    m=m+n;
		else
		    m=m+n-1;
		if(m%7==0)
		    my_printf("Sun.");
		if(m%7==1)
		    my_printf("Mon.");
		if(m%7==2)
		    my_printf("Tue.");
		if(m%7==3)
		    my_printf("Wed.");
		if(m%7==4)
		    my_printf("Thu.");
		if(m%7==5)
		    my_printf("Fri.");
		if(m%7==6)
		    my_printf("Sat.");
	}
	else
	{
		m=(a+a/4-a/100+a/400)%7;
		for(i=1;i<b;i++)
		    n+=day[i];
		n=n+c;
		m=m+n-1;
		if(m%7==0)
		    my_printf("Sun.");
		if(m%7==1)
		    my_printf("Mon.");
		if(m%7==2)
		    my_printf("Tue.");
		if(m%7==3)
		    my_printf("Wed.");
		if(m%7==4)
		    my_printf("Thu.");
		if(m%7==5)
		    my_printf("Fri.");
		if(m%7==6)
		    my_printf("Sat.");
	}
	return 0;
} 