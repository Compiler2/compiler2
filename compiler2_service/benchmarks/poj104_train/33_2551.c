#define NUM_ITER 25017

#include <header.h>

int main_bench(){
    char z[1000][1000],s[1000][1000];
	int n,i,k,a;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		my_scanf("%s\n",z[i]);
	}
	for(i=0;i<=n-1;i++){
		for(k=0;z[i][k]!=0;k++){
            if(z[i][k]=='A'){
				s[i][k]='T';
			}
			if(z[i][k]=='T'){
				s[i][k]='A';
			}
			if(z[i][k]=='C'){
				s[i][k]='G';
			}
			if(z[i][k]=='G'){
				s[i][k]='C';
			}
		}
	}
		for(i=0;i<=n-1;i++){
		my_printf("%s\n",s[i]);
		}
	return 0;
}