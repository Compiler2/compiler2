#include <header.h>

int main_bench(){
	int n,i,j;
	char a[21];
	my_scanf("%d",&n);
	for(j=0;j<n;j++){
		my_scanf("%s",a);
		for(i=0;a[i];i++){
		if(a[i]=='_'||(a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
			if(i==0&&(a[i]>='0'&&a[i]<='9')){
				my_printf("no\n");
				break;
			}
		}
		if(!(a[i]=='_'||(a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))){
			my_printf("no\n");
			break;
		}
		}
		if(a[i]=='\0'){
			my_printf("yes\n");
		}
	}
	return 0;
}


	

