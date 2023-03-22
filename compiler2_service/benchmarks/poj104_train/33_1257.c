#include <header.h>

int main_bench(){
	char zfc[9999][256];
	int n;
	int i,j;
	int sz[9999];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",&zfc[i]);
	}
    for(i=0;i<n;i++){
		sz[i]=strlen(zfc[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<sz[i];j++){
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
		zfc[i][sz[i]]='\0';
		my_printf("%s\n",zfc[i]);

	}

	return 0;
}



