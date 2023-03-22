#include <header.h>

int main_bench(){
	int n,i,len;
	char a[1000][41];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a[i]);
	}
	len=strlen(a[0]);
	my_printf("%s",a[0]);
	for(i=1;i<n;i++){
		len+=1+strlen(a[i]);
		if(len<=80){
			my_printf(" %s",a[i]);
		}
		if(len>80){
			my_printf("\n%s",a[i]);
			len=strlen(a[i]);
		}
	}
	return 0;
}