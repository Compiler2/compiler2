#define NUM_ITER 1024891

#include <header.h>

int main_bench(){
    int money;
	int a,b,c,d,e,f;
	int g,h,i,j,k,l;
	my_scanf("%d",&money);
	a=money-money%100;
	b=money-(money-a)%50-a;
	c=money-(money-a-b)%20-a-b;
	d=money-(money-a-b-c)%10-a-b-c;
	e=money-(money-a-b-c-d)%5-a-b-c-d;
	f=money-(money-a-b-c-d-e)%1-a-b-c-d-e;
	g=a/100;
	h=b/50;
	i=c/20;
	j=d/10;
	k=e/5;
	l=f/1;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",g,h,i,j,k,l);
	return 0;
}