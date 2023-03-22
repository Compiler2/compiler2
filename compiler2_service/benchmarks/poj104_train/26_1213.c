#define NUM_ITER 1367478

#include <header.h>

int main_bench(){
	int i,l,m;
	char a[300],b[300];
	gets(a);
	m=0;
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]==' '&&a[i+1]!=' '){
			b[m]=a[i];
			m++;
			}else if(a[i]!=' '){
			b[m]=a[i];
			m++;
			}else{
				continue;
			}
	}
	b[m]='\0';
	my_printf("%s", b);
	return 0;
}