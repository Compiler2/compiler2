#define NUM_ITER 926001

#include <header.h>

int main_bench(){
	int w;
	my_scanf("%d",&w);
	int i=0;
	int sz[12]= { 13,44,72,103,133,164,194,225,256,286,317,347 } ;
	while (i<12){
		if ((sz[i]+w)%7==6){
			my_printf("%d\n",i+1);
		}
			i++;
	}
	return 0;
}