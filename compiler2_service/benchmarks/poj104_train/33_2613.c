#define NUM_ITER 24296

#include <header.h>


int main_bench()
{
	char c[256];
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",c);
		for(j=0;(c[j]!='\0');j++){
			if(c[j]=='A'){
				c[j]='T';
			}
			else if(c[j]=='T'){
				c[j]='A';
			}
			else if(c[j]=='C'){
				c[j]='G';
			}
			else if(c[j]=='G'){
				c[j]='C';
			}
		}
		for(j=0;(c[j]!='\0');j++){
			my_printf("%c",c[j]);
		}
		my_printf("\n");
	}
	return 0;
}