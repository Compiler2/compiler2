#include <header.h>

int main_bench()
{
	int n,k,i,l;
	my_scanf("%d",&n);
	for(k=0;k<=n;k++){
		char *p,s[256];
		gets(s);
		l=strlen(s);
		for(p=s,i=0;*p;p++,i++){
			if(i==l-1){			
				if(*p=='A'){
				my_printf("T\n");
			}else if(*p=='T'){
				my_printf("A\n");
			}else if(*p=='C'){
				my_printf("G\n");
			}else if(*p=='G'){
				my_printf("C\n");
			}
			}else{
			if(*p=='A'){
				my_printf("T");
			}else if(*p=='T'){
				my_printf("A");
			}else if(*p=='C'){
				my_printf("G");
			}else if(*p=='G'){
				my_printf("C");
			}
			}
		}
	}
	return 0;
} 
