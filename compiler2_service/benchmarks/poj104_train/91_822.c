#include <header.h>

int main_bench(){
	int i,j;
	char a[101];
	gets(a);
	for (i=0;i<strlen(a)-1;i++)
		my_printf("%c",*(a+i)+*(a+i+1));
	my_printf("%c",*a+*(a+strlen(a)-1));
}