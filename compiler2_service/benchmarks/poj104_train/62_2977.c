#define NUM_ITER 1517322

#include <header.h>

int main_bench(){
	char a[100];
	int n,i;
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(i==0)my_printf("%c",a[i]);
		else if(a[i-1]==' '&&a[i]!=' ')
			my_printf(" %c",a[i]);
		else if(a[i]!=' ')my_printf("%c",a[i]);
	}
	
	return 0;
}
