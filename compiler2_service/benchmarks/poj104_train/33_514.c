#include <header.h>

char pd(char x);
int main_bench(){
	int i,j,n,m;
	char dui;
	char jianji[256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",jianji);
		m=strlen(jianji);
		for(j=0;j<m;j++){
			dui=pd(jianji[j]);
			my_printf("%c",dui);
		}
		if(i<n-1){
			my_printf("\n");
		}
	}
	return 0;
}

char pd(char x){
	char dy;
	if(x=='A'){
		dy='T';
	}
	if(x=='T'){
		dy='A';
	}
	if(x=='C'){
		dy='G';
	}
	if(x=='G'){
		dy='C';
	}
	return dy;
}
