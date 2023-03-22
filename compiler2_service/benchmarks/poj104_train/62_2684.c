#define NUM_ITER 1330025

#include <header.h>

int main_bench(){
    char zfc[10005];
	gets(zfc);
	int i,l;
	l=strlen(zfc);
	for(i=0;i<l;i++){
		if(zfc[i]!=' '||(zfc[i]==' '&&zfc[i-1]!=' ')){
			my_printf("%c",zfc[i]);
		}
	}
	return 0;
}  