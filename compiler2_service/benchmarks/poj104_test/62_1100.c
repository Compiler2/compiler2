#define NUM_ITER 1185422

#include <header.h>

int main_bench(){
	char a[100000];
	gets(a);
	int i,l;
	l=strlen(a);
	for(i=l-1;i>0;i--){
		if(a[i]==' '&&a[i-1]==' ')
			strcpy(&a[i-1],&a[i]);
	}
	my_printf("%s",a);
	return 0;
}
