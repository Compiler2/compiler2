#define NUM_ITER 24468

#include <header.h>

int main_bench(){
	int n,k,i,j;
	my_scanf("%d",&n);
	char zfc[1000][256];
	for(i=0;i<n;i++){
		my_scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++){
		k=strlen(zfc[i]);
		for(j=0;j<k;j++){
			if(zfc[i][j]=='A'){
				zfc[i][j]='T';
			}else if(zfc[i][j]=='T'){
				zfc[i][j]='A';
			}else if(zfc[i][j]=='G'){
				zfc[i][j]='C';
			}else if(zfc[i][j]=='C'){
				zfc[i][j]='G';
			}
		}
	}
	for(i=0;i<n-1;i++){
	my_printf("%s\n",zfc[i]);
	}
	my_printf("%s",zfc[n-1]);
	return 0;
}

