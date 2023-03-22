#define NUM_ITER 902471

#include <header.h>

int w;
void judge(int month,int w);
int main_bench()
{
	int month,cha;
	my_scanf("%d",&w);
	month=1;
	cha=13;
	judge(month,cha);
	month=2;
	cha=13+31;
    judge(month,cha); 
	month=3;
	cha=13+31+28;
    judge(month,cha);
	month=4;
	cha=13+31+28+31;
    judge(month,cha);
	month=5;
	cha=13+31+28+31+30;
    judge(month,cha);
	month=6;
	cha=13+31+28+31+30+31;
    judge(month,cha);
	month=7;
	cha=13+31+28+31+30+31+30;
    judge(month,cha);
	month=8;
	cha=13+31+28+31+30+31+30+31;
    judge(month,cha);
	month=9;
	cha=13+31+28+31+30+31+30+31+31;
    judge(month,cha);
	month=10;
	cha=13+31+28+31+30+31+30+31+31+30;
    judge(month,cha);
	month=11;
	cha=13+31+28+31+30+31+30+31+31+30+31;
    judge(month,cha);
	month=12;
	cha=13+31+28+31+30+31+30+31+31+30+31+30;
    judge(month,cha);
}
void judge(int month,int cha)
{
	int x;
	x=(w+cha-1)%7;
	if(x==5) my_printf("%d\n",month);
}
