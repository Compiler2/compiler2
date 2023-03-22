#define NUM_ITER 1306919

#include <header.h>

int main_bench(){
	char zfc[210];
	gets(zfc);
	int len=strlen(zfc);
	for(int k=0;k<len-1;k++){
		if((zfc[k]!=32)||((zfc[k]==32)&&(zfc[k+1]!=32))){
			my_printf("%c",(zfc[k]));
		}
		else if((zfc[k]==32)&&(zfc[k+1]==32)){
			my_printf("%c",(zfc[k]));
			while(zfc[k]==32){
				k++;
			}
			k--;
		}
	}
	my_printf("%c",(zfc[len-1]));
	return 0;
}