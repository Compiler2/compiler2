#include <header.h>

int main_bench()
{
	char str[300],e;
	int i,n,zc,x=1;
	my_scanf("%s",str);
	n=strlen(str);
	for(e='A';e<='Z';e++){
		zc=0;
		for(i=0;i<n;i++){
			if(str[i]==e){
				zc++;
			    x=0;}
		}
		if(zc!=0){
			my_printf("%c=%d\n",e,zc);}
	}
	for(e='a';e<='z';e++){
		zc=0;
		for(i=0;i<n;i++){
			if(str[i]==e){
				zc++;
			    x=0;}
		}
		if(zc!=0){
			my_printf("%c=%d\n",e,zc);}
	}
	if(x){
		my_printf("No");}
	return 0;
}