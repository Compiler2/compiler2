#define NUM_ITER 13884

#include <header.h>

int main_bench()
{
    int a,b,c,d,e,f;
	my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
		my_printf("%d\n",(d+12-a)*3600+(e-b)*60+f-c);
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		
	}
	return 0;
}