#define NUM_ITER 1073265

#include <header.h>

int main_bench(){
    int i;
	char str[101];
	gets(str);
	my_printf("%c",str[0]);
	for(i=1;i<strlen(str);i++){
		if(str[i]!=' '){
			my_printf("%c",str[i]);
		}else if(str[i-1]!=' '){
			my_printf(" ");
		}else{
			continue;
		}
	}
	my_printf("\n");
}
