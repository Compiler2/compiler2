#define NUM_ITER 13213

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f;
	my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	int s;
	while(a!=0){
		d+=12;
		s=0;
		s+=(d-a)*3600+(e-b)*60+(f-c);
		my_printf("%d\n",s);
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}
