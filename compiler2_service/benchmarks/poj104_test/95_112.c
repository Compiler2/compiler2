#define NUM_ITER 1038406

#include <header.h>

int main_bench(){
	char a[80],b[80];
	gets(a);
	gets(b);
	int i;
	for(i=0;a[i]!='\0'||b[i]!='\0';i++){
		if(a[i]>'Z')a[i]=a[i]-32;
		if(b[i]>'Z')b[i]=b[i]-32;
	}
	if(strcmp(a,b)>0)my_printf(">");
	else if(strcmp(a,b)<0)my_printf("<");
	else my_printf("=");
	return 0;
}