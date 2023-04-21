#define NUM_ITER 29306

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	char a[1000][40];
	int i;
	for(i=0;i<n;i++){
		my_scanf("%s",a[i]);
	}
	int b[1000];
	for(i=0;i<n;i++){
		b[i]=strlen(a[i]);
	}
	my_printf("%s",a[0]);
	int count=strlen(a[0]);
	for(i=1;i<n;i++){
		if(count+1+strlen(a[i])<=80){
			my_printf(" %s",a[i]);
			count=count+1+strlen(a[i]);
		}else{
			my_printf("\n%s",a[i]);
			count=strlen(a[i]);
		}
	}
	return 0;
}
