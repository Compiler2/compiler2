#define NUM_ITER 34974

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	char zfc[n][257];
	for(int i=0;i<n;i++){
		my_scanf("%s",zfc[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<257;j++){
			if(zfc[i][j]=='A'){
				zfc[i][j]='T';
			}else{
				if(zfc[i][j]=='T'){
					zfc[i][j]='A';
				}else{
					if(zfc[i][j]=='C'){
						zfc[i][j]='G';
					} else{
						if(zfc[i][j]=='G'){
							zfc[i][j]='C';
						}else{
							break;
						}}}}}}
	for(int i=0;i<n;i++){
		my_printf("%s\n",zfc[i]);
	}
	return 0;}
