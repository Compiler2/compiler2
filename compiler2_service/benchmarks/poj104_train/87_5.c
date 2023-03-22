#define NUM_ITER 11251

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f,t=0,m=0,n=0;
	my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
		m=a*3600+b*60+c;
		n=(d+12)*3600+e*60+f;
		t=n-m;
		my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		my_printf("%d\n",t);
		
	}


	
	return 0;
}


