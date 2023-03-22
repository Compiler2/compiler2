#define NUM_ITER 1502879

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e;
	my_scanf("%d",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	d=(n-a*10000-b*1000-c*100)/10;
	e=n-a*10000-b*1000-c*100-d*10;
	int f[5]={e,d,c,b,a},i;
	for(i=0;i<5;i++){
		if(f[i]!=0)
			my_printf("%d",f[i]);}
	return 0;
}
