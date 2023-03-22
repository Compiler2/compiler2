#define NUM_ITER 1528284

#include <header.h>

int main_bench(){
	char zfc[1000];
	int i;
	gets(zfc);
	for(i=0;zfc[i]!='\0';i++){
		if(zfc[i]!=' '){
			my_printf("%c",zfc[i]);
		}else{
			if(zfc[i+1]==' '){
				continue;
			}else{
				my_printf(" ");
			}
		}
	}
	return 0;
}
