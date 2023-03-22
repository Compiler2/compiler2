#define NUM_ITER 22347

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	char str[256];
	char o,p,q,r;
	o='T';
	p='A';
	q='C';
	r='G';
	int i,j;
	int len;
	for(i=0;i<n;i++){
		my_scanf("%s",str);
		len=strlen(str);
		for(j=0;j<len;j++){
			if(str[j]=='A')
				my_printf("%c",o);
			else if(str[j]=='T')
				my_printf("%c",p);
			else if(str[j]=='C')
				my_printf("%c",r);
			else my_printf("%c",q);
		}
		my_printf("\n");
	}


	return 0;
}