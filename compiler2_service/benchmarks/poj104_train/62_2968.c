#include <header.h>

int main_bench(){
	int j,i,n;
    char s[380];
	gets(s);
    my_printf("%c",s[0]);
	for(i=1;s[i];i++){
		if(s[i-1]==' '&&s[i]==' '){
			continue;
		}else{
			my_printf("%c",s[i]);
		}
	}
	return 0;
}