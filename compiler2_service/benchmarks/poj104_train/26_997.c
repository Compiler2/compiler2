#define NUM_ITER 1400076

#include <header.h>

int main_bench()
{
	int i,j,n,k=0;
	int e;
	char a[101];
	char b[101];
	gets(a);
	b[0]=a[0];
	for(n=0;a[n]!='\0';n++);
	for(i=1;i<n+1;i++){
		if(a[i]!=' '&&a[i]!='\0'){
			k++;
			b[k]=a[i];
		}
		if((a[i]==' '&&a[i+1]!=' '&&a[i-1]!=' ')||(a[i]==' '&&a[i+1]==' '&&a[i-1]!=' ')){
			k++;
			b[k]=a[i];
		}
		if(a[i]=='\0'){
			k++;
			b[k]=a[i];
		}
	}
	my_printf("%s",b);
	return 0;
}
