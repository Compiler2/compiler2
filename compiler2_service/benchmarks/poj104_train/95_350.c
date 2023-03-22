#define NUM_ITER 1104617

#include <header.h>


int main_bench()
{
	char a[80],b[80];
	gets(a);
	gets(b);
	int l;
	l=strlen(a);
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
	}
	for(i=0;b[i]!='\0';i++){
		if(b[i]>='A'&&b[i]<='Z') b[i]+=32;
	}
	int t;t=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>b[i]){
			my_printf(">");
			break;
		}
		else if(a[i]<b[i]){
			my_printf("<");
			break;
		}
		else if(a[i]==b[i]) t++;
	}
	if(t==l) my_printf("=");
	return 0;
}