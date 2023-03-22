#define NUM_ITER 1259092

#include <header.h>

int main_bench(){
	char s[100];
	char a;
	gets(s);
	int n,i,j;
	n=strlen(s);
	for(i=0;i<(n-1);i++){
		j=s[i]+s[i+1];
        a=j;
		my_printf("%c",a);
	}
	j=s[n-1]+s[0];
	a=j;
	my_printf("%c",a);

	
	return 0;
}