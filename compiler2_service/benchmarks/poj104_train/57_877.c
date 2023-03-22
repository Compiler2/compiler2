#include <header.h>

int main_bench(){
	char zf[21];
	int l,n,judge=0;
	my_scanf("%d",&n);
	for(int j=0;j<n;j++){
		my_scanf("%s",zf);
		l=strlen(zf);
		if(zf[l-1]=='r'){
			zf[l-2]='\0';
		}
		if(zf[l-1]=='y'){
			zf[l-2]='\0';
		}
		if(zf[l-1]=='g'){
			zf[l-3]='\0';
		}
		my_printf("%s\n",zf);
	}
	return 0;
}