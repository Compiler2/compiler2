#define NUM_ITER 1245667

#include <header.h>

int main_bench()
{   int i,sum=0;
	int a[500];
	char c[10000];
	gets(c);
	for(i=0;i<strlen(c)+1;i++){
		if(c[i]!=' '&&c[i]!='\0'){
			sum++;
		}
		if(c[i]==' '){
			if(sum!=0){
				my_printf("%d,",sum);
				sum=0;
			}
		}
		if(c[i]=='\0'){
			my_printf("%d",sum);
		}
	}
	return 0;
}