#include <header.h>

int main_bench(){
	char a[260],b[260];
	int n,i,t;
	my_scanf("%d",&n);
	for(t=0;t<260;t++){
		b[t]='\0';
	}
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		for(t=0;a[t]!='\0';t++){
			if(a[t]=='A'){
				b[t]='T';
			}
			if(a[t]=='C'){
				b[t]='G';
			}
			if(a[t]=='T'){
				b[t]='A';
			}
			if(a[t]=='G'){
				b[t]='C';
			}
		}
		b[t]='\0';
		my_printf("%s\n",b);
	}
		return 0;
}