#include <header.h>

int main_bench(){
	int i,n,l;
	char a[33];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		if(a[strlen(a)-1]=='g'){
			a[strlen(a)-3]='\0';
			my_printf("%s\n",a);
		}
		if(a[strlen(a)-1]=='r'||a[strlen(a)-1]=='y'){
			a[strlen(a)-2]='\0';
			my_printf("%s\n",a);
		}
	}
	return 0;
}
