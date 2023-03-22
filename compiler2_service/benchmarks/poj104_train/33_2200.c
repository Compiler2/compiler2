#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
int i,j,l,m;
char a[266];
for(i=0;i<n;i++){
my_scanf("%s",&a);
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
return 0;}