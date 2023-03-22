#define NUM_ITER 1025557

#include <header.h>

int main_bench(){
	int i,l;
	char a[50],b[50];
	gets(a);gets(b);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]>=97)a[i]=a[i]-32;
	}
	for(i=0;i<l;i++){
		if(b[i]>=97)b[i]=b[i]-32;
	}
	if(strcmp(a,b)>0)my_printf(">");
	if(strcmp(a,b)<0)my_printf("<");
	if(strcmp(a,b)==0) my_printf("=");
	return 0;
}
