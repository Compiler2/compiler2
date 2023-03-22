#define NUM_ITER 1310701

#include <header.h>

int main_bench()
{ char a[101];
gets(a);
int i,word=0;
for(i=0;i<strlen(a)-1;i++){
	if(a[i]==' ') word=0;
	else word=1;
	if(word==1&&a[i+1]!=' '){
		my_printf("%c",a[i]);}
	if(word==1&&a[i+1]==' '){
		my_printf("%c ",a[i]);}
}
my_printf("%c",a[strlen(a)-1]);

return 0;
}