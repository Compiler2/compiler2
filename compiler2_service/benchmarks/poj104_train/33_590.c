#define NUM_ITER 28277

#include <header.h>

int main_bench(){
int n,i,k;
char sz[500];
my_scanf("%d",&n);
for(i=1;i<=n;i++){
	my_scanf("%s",sz);
	for(k=0;sz[k]!='\0';k++){
		if(sz[k]=='A'){
			sz[k]='T';
		}else if(sz[k]=='T'){
			sz[k]='A';
		}else if(sz[k]=='G'){
			sz[k]='C';
		}else if(sz[k]=='C'){
			sz[k]='G';	
		}
	}
	sz[k]='\0';
	my_printf("%s\n",sz);
}
	return 0;
}