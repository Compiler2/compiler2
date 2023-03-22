#define NUM_ITER 1532531

#include <header.h>

int main_bench(){
	char k[1000];
    int i;
	gets(k);
	
    for(i=0;k[i]!='\0';i++){
		
		if(k[i]!=' ') my_printf("%c",k[i]);
		else{
			if(k[i+1]!=' ') my_printf("%c",k[i]);
		}
	}
	
    return 0;

}
