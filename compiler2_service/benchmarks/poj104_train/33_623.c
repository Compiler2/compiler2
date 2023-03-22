#define NUM_ITER 29675

#include <header.h>

int main_bench(){
	int n,i,j;
	char z[256],x[256],A,T,C,G;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(z);
		for(j=0;z[j];j++){
			if(z[j]=='A')
				x[j]='T';
			if(z[j]=='T')
				x[j]='A';
			if(z[j]=='C')
				x[j]='G';
			if(z[j]=='G')
				x[j]='C';
		}
		x[j]='\0';
		my_printf("%s\n",x);
	}
	return 0;
}