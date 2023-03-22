#include <header.h>

int main_bench()
{ char s[100];
	int i,j,n;
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]!=' ')
		my_printf("%c",s[i]);
		else{
	if(s[i-1]==' ')
		continue;
		else my_printf("%c",s[i]);}}
}


