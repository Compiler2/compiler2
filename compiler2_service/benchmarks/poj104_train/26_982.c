#define NUM_ITER 1368385

#include <header.h>

int main_bench(){
	char zfc[100];
	gets(zfc);
	int n;
	n=strlen(zfc);
	int i;
	my_printf("%c",zfc[0]);
	for(i=1;i<n;i++){
		if(zfc[i]!=' '){
			my_printf("%c",zfc[i]);
		}else if(zfc[i]==' '&&zfc[i-1]!=' '){
			my_printf("%c",zfc[i]);
		}
	}
	return 0;
}