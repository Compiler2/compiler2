#define NUM_ITER 43469

#include <header.h>

int main_bench()
{
	int sz[100];
         int i;
	int a , b , c , e;
	my_scanf("%d", &a);
	for(i=0 ; i<a; i++){
		my_scanf("%d", &(sz[i]));
	}
	for(i=0; i<a-1; i++){
		if(sz[i] > sz[i+1]){
			e = sz[i];
			sz[i] = sz[i+1];
			sz[i+1] = e;
		}
	}		
	b=sz[i];
	for(i=0 ; i<a-2 ; i++){
		if(sz[i] > sz[i+1]){
			e = sz[i];
			sz[i] = sz[i+1];
			sz[i+1] = e;
		}
	}		
	c=sz[i];
	my_printf("%d\n", b);
	my_printf("%d\n", c);
	return 0;
}