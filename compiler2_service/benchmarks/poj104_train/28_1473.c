#include <header.h>

int main_bench(){
	char a[20000];
	gets(a);
	int len=0,n=0,i=0;
	while(a[i]!='\0'){
		if(a[i]!=32){
			len++;
		}
		else{
			if(a[i-1]!=32){
				my_printf("%d,",len);
				len=0;
			}
		}
		i++;
	}
	my_printf("%d",len);
	return 0;
}