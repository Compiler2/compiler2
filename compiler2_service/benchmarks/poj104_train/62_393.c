#include <header.h>

int main_bench(){
    char w[300];
	int a,b,n,i,j;
	gets(w);
	my_printf("%c",w[0]);
	for(i=1;w[i]!='\0';i++){
		if((w[i-1]==' ')&&(w[i]==' ')){
			
		}else{
			my_printf("%c",w[i]);
		}
	}
    return 0;
}