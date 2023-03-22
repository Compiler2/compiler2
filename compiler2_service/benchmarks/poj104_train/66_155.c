#include <header.h>

int main_bench()
{
	unsigned long a,b,c,d,e,f,g,h,n;
	my_scanf("%ld %ld %ld",&a,&b,&c);
	d=a/400;
	e=a/4;
	f=a/100;
	g=0;
	if(a>1e8)
		a=a%2800;
	switch(b)
	{
	case 12: g+=30;
	case 11: g+=31;
	case 10: g+=30;
	case 9: g+=31;
	case 8: g+=31;
	case 7: g+=30;
	case 6: g+=31;
	case 5: g+=30;
	case 4: g+=31;
	case 3: g+=28;
	case 2: g+=31;
	case 1: g+=0;break;
	default: my_printf("error\n");
	}
	if(((a%4==0&&a%100!=0)||(a%400==0))&&(b<=2))
	 e=e-1;
	n=365*(a-1)+g+c+e-f+d;
	h=n%7;
	switch(h)
	{
	case 1: my_printf("Mon.");break;
	case 2: my_printf("Tue.");break;
	case 3: my_printf("Wed.");break;
	case 4: my_printf("Thu.");break;
	case 5: my_printf("Fri.");break;
	case 6: my_printf("Sat.");break;
	case 0: my_printf("Sun.");break;
		default: my_printf("error\n");
	}
}
