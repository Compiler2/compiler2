#define NUM_ITER 1161011

#include <header.h>

int main_bench(){
	char a[30000],b[300][100];
	int lenth,i,n=0,k=0;
	int shuzu[300];
	gets(a);
	lenth=strlen(a);
	for(i=0;i<lenth;i++){
		if(a[i]!=' '){
			b[n][k]=a[i];
			k++;
		}
		if(a[i]==' '&&a[i+1]!=' '){
			n++;
			k=0;
		}
	}
	n++;
	for(i=0;i<n;i++){
		shuzu[i]=strlen(b[i]);
	}
	my_printf("%d",shuzu[0]);
	for(i=1;i<n;i++){
		my_printf(",%d",shuzu[i]);
	}
	return 0;
}
