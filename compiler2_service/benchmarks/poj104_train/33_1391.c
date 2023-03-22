#define NUM_ITER 31402

#include <header.h>

int main_bench()
{
	int n,i,j;
	char a[10000],b[10000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		for(j=0;a[j]!='\0';j++){
			if(a[j]=='A'){
				b[j]='T';
			}
			if(a[j]=='T'){
				b[j]='A';
			}
			if(a[j]=='C'){
				b[j]='G';
			}
			if(a[j]=='G'){
				b[j]='C';
			}
		}
		b[j]='\0';
		my_printf("%s\n",b);
		b[0]='\0';
	}
	return 0;
}