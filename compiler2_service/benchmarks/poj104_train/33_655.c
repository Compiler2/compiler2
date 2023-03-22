#define NUM_ITER 20320

#include <header.h>

int main_bench(){
	char zfc[256],dy[256]={0};
	int i,n,l,j;
	char sz;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zfc);
		l=strlen(zfc);
		for(j=0;j<l;j++){
			if(zfc[j]=='A'){
				 sz='T';
			}else if(zfc[j]=='T'){
				 sz='A';
			}else if(zfc[j]=='C'){
				 sz='G';
			}else if(zfc[j]=='G'){
				 sz='C';
			}
			dy[j]=sz;
		}
		for(j=0;j<=l-1;j++){
				my_printf("%c",dy[j]);
		}
		my_printf("\n");
	}
				


	return 0;
}
