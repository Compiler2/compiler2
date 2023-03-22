#include <header.h>

int main_bench(){
	int i,a;
	char z[300];
	gets(z);
	a=strlen(z);
    for(i=0;i<a;i++){
		
		if(z[i]!=' '){
			my_printf("%c",z[i]);
			continue;
		}
		if(z[i]==' '&&z[i+1]!=' '){
			my_printf("%c",z[i]);
			continue;
		}
	}
    return 0;
}
