#define NUM_ITER 1327640

#include <header.h>

int main_bench()
{
	int y,m,d,a,n;
	my_scanf("%d%d%d",&y,&m,&d);
	if((y%4)==0&&(y%100)!=0||(y%400==0))
		a=1;
	else
		a=0;
	
	switch(m)
		{
		case 1: n=d;break;
		case 2: n=31+d;break;
		case 3: n=31+28+d;break;
		case 4: n=31+28+31+d;break;
		case 5: n=31+28+31+30+d;break;
		case 6: n=31+28+31+30+31+d;break;
		case 7: n=31+28+31+30+31+30+d;break;
		case 8: n=31+28+31+30+31+30+31+d;break;
		case 9: n=31+28+31+30+31+30+31+31+d;break;
		case 10: n=31+28+31+30+31+30+31+31+30+d;break;
		case 11: n=31+28+31+30+31+30+31+31+30+31+d;break;
		case 12: n=31+28+31+30+31+30+31+31+30+31+30+d;break;
		}

    if(a==0)
	{
		my_printf("%d",n);
	}
	if(m!=1&&m!=2&&a==1)
	{
		n=n+1;
		my_printf("%d",n);
	}
	if(a==1&&m==1)	my_printf("%d",n);
	if(a==1&&m==2) my_printf("%d",n);

	return 0;
}

