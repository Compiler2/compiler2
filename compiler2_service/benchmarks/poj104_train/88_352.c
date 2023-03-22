#define NUM_ITER 719674

#include <header.h>


int main_bench()
{
	char sz[30];
	int i;
	gets(sz);
	for(i=0;i<30;i++){
		if((sz[i]>='0')&&(sz[i]<='9')){
			my_printf("%c",sz[i]);
		}else{
			my_printf("\n");
		}
	}
	return 0;
}