#define NUM_ITER 1342602

#include <header.h>


int main_bench(){
	char zfc[250];
	gets(zfc);
	int n=strlen(zfc);
	for(int i=0;i<n;i++){
		if(i==0){
			my_printf("%c",zfc[0]);
		}else if(zfc[i]!=' '){
			my_printf("%c",zfc[i]);
		}else if(zfc[i-1]!=' '){
			my_printf("%c",zfc[i]);
		}
	}
	return 0;
}
