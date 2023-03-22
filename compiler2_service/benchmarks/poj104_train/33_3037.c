#define NUM_ITER 23971

#include <header.h>

int main_bench(){
	int i,n,j;
    char a[256];
	my_scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(a);
		for(j=0;j<strlen(a);j++){
			if(a[j]=='A'||a[j]=='T'){
				if(a[j]=='T'){
					a[j]='A';}
				else{
			        a[j]='T';}
			}
			if(a[j]=='G'||a[j]=='C'){
				if(a[j]=='C'){
					a[j]='G';}
				else{
			        a[j]='C';}
			}
		}
	    my_printf("%s\n",a);
	}
	return 0;
}