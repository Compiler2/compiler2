#define NUM_ITER 13189

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f;
	int sum=0;
	for(;;){
		my_scanf("%d%d%d%d%d%d\n",&a,&b,&c,&d,&e,&f);
		sum=(d+12-a)*3600+(e-b)*60+f-c;
		if(a==0){
			return 0;
		}
		my_printf("%d\n",sum);		
		sum=0;
	}

}