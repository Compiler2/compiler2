#define NUM_ITER 1356503

#include <header.h>

int main_bench(){
	char a[1000];
	gets(a);
	int i=0;
	int m;
	m=strlen(a);
	for(i=0;i<m;i++){
		if((i==0&&a[i]==' ')||(a[i-1]==' '&&a[i]==' ')){
			continue;
		}else{
			my_printf("%c",a[i]);
		}
	}

		return 0;
	}