#define NUM_ITER 12774

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f;
	int r=0;
	while(1){
		r=0;
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0){break;}
		d+=12;
		r+=3600-(b*60+c);
		r+=e*60+f;
		r+=(d-(a+1))*3600;
		my_printf("%d\n",r);
	}
	return 0;
}