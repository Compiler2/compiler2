#include <header.h>

int main_bench(){
	char zfc[1000][256];
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;zfc[i][j]!='\0';j++){
			if(zfc[i][j]=='A'){
				zfc[i][j]='T';
			}
			else
				if(zfc[i][j]=='T'){
				zfc[i][j]='A';
			}
			else
				if(zfc[i][j]=='G'){
				zfc[i][j]='C';
			}
			else
				if(zfc[i][j]=='C'){
				zfc[i][j]='G';
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;zfc[i][j]!='\0';j++){
			my_printf("%c",zfc[i][j]);
		}
			if(zfc[i][j]=='\0'){
			my_printf("\n");
			}
	}


	return 0;
}



