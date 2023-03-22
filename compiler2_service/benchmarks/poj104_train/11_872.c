#define NUM_ITER 304696

#include <header.h>

int main_bench()
{
	int y,m,d,x=0,i;
	int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&y);
	my_scanf("%d",&m);
	my_scanf("%d",&d);
	if((y%400==0)||(y%100!=0&&y%4==0))
		for(i=0;i<m-1;i++)
			x=x+a[i];
	else
		for(i=0;i<m-1;i++)
			x=x+b[i];
	x=x+d;
	my_printf("%d",x);
}