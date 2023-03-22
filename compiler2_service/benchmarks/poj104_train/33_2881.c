#define NUM_ITER 34043

#include <header.h>


char s[1000];
int main_bench(){
	
	int T,i;
	my_scanf("%d",&T);
	while (T--){
		my_scanf("%s",s);
		for (i=0;s[i];i++){
			if (s[i]=='A'){
				putchar('T');
			}
			if (s[i]=='T'){
				putchar('A');
			}
			if (s[i]=='G'){
				putchar('C');
			}
			if (s[i]=='C'){
				putchar('G');
			}
		}
		puts("");
	}
}