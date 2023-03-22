#define NUM_ITER 18439

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	char a[1000][256];
	int b[1000];
	int i,j;
	for(i=0;i<n;i++){
		my_scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<strlen(a[i]);j++){
			if(a[i][j]=='A'){
				a[i][j]='T';
			}else if(a[i][j]=='T'){
				a[i][j]='A';
			}else if(a[i][j]=='G'){
				a[i][j]='C';
			}else if(a[i][j]=='C'){
				a[i][j]='G';
			}
		}
	}
	for(i=0;i<n;i++){
		my_printf("%s\n",a[i]);
	}
	return 0;
}




