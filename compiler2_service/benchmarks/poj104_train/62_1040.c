#define NUM_ITER 1318844

#include <header.h>

int main_bench(){
	int i,a;
	char b=32;
	char sz[10000],res[10000];
	gets(sz);
	a=strlen(sz);
	for(i=0;i<a;i++){
		if(sz[i]!=32){
			my_printf("%c",sz[i]);
		}else if(sz[i]==32&&sz[i-1]!=32){
			my_printf("%c",b);
		}
	}
	return 0;
}