#define NUM_ITER 903782

#include <header.h>

int main_bench(){
	char s[101],a[101],b[101];
	char *ss[100];
	int i,n=0;
	gets(s);
	gets(a);
	gets(b);
	
	ss[n++]=s;
	for (i=0;s[i];i++){
		if(s[i]==' '){
			s[i]=0;
			ss[n++]=s+i+1;
		}
	}
	
	for(i=0;i<n;i++){
		if(i>0)
			my_printf(" ");
		if(strcmp(ss[i],a)==0)
			my_printf("%s",b);
		else
			my_printf(ss[i]);
	}
	my_printf("\n");
	return 0;
}
