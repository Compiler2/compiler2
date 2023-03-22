#include <header.h>

int main_bench(){
	int n,a,b,c,d,e,f,i,j;
    char sz[1000][500];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",sz[i]);
		for(j=0;j<strlen(sz[i]);j++){
			if(sz[i][j]=='A'){
				my_printf("T");
			}else if(sz[i][j]=='G'){
				my_printf("C");
			}else if(sz[i][j]=='T'){
				my_printf("A");
			}else if(sz[i][j]=='C'){
				my_printf("G");
			}	
		}
		my_printf("\n");
	}

	return 0;
}
