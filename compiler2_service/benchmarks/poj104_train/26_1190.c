#define NUM_ITER 1323207

#include <header.h>

int main_bench(){
	int i,n,m,j=0;
	char a[101],b[101];
	gets(a);
    n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]!=' '){
			b[j]=a[i];
			j=j+1;
		}else
            if(a[i]==' '&&a[i+1]!=' '){
				b[j]=a[i];
				j=j+1;
			}
	}
	for(i=0;i<j;i++){
		my_printf("%c",b[i]);
	}
	return 0;

}