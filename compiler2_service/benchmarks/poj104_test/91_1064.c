#include <header.h>


int main_bench(){
	char in[101];
	int i,n,out;
	gets(in);
	n=strlen(in);
	for(i=0;i+1<n;i++){
		out=(int)(in[i])+(int)(in[i+1]);
		my_printf("%c",out);
	}
	out=(int)(in[n-1])+(int)(in[0]);
	my_printf("%c",out);
	return 0;
}
