#include <header.h>

int main_bench(){
	double percent;
	char a[501],b[501];
	int number=0;
	int i;
	my_scanf("%lf",&percent);
	my_scanf("%s",a);
	my_scanf("%s",b);
	if(strlen(a)!=strlen(b)){
		my_printf("error");
		return 0;
	}
	for(i=0;a[i]!='\0';i++){
		if((a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
		}else{
			my_printf("error");
			return 0;
		}
	}
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b[i]){
			number++;
		}
	}
	if((double)number>((double)strlen(a))*percent){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}