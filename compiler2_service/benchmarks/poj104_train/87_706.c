#define NUM_ITER 12928

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f;
	int s;
	my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0){ 
s=0;
		d+=12;
		s+=(d-a)*3600+(e-b)*60+(f-c)*1;
		my_printf("%d\n",s);
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

	}
	return 0;
}
