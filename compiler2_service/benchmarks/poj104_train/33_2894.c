#include <header.h>

int main_bench(){
	int n,i,j;
	char a[256],b[256];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		my_scanf("%s",a);
		for(j=0;a[j]!='\0';j++){
			if(a[j]=='A'){
				my_printf("T");
			}
			if(a[j]=='T'){
				my_printf("A");
			}
			if(a[j]=='C'){
				my_printf("G");
			}
			if(a[j]=='G'){
				my_printf("C");
			}
		}
		my_printf("\n");
	}


	return 0;
}
