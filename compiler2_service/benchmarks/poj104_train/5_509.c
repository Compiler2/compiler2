#include <header.h>

int main_bench(){
	char a[501],b[501];
	int n,i,j;
	double r,m=0,l=0;
	my_scanf("%lf",&r);
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	if(strlen(a)!=strlen(b)){
		my_printf("error");
		return 0;
	}
	else if(strlen(a)==strlen(b)){
		for(i=0;a[i]!='\0';i++){ 
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
				my_printf("error");
				return 0;
			}
			else if(a[i]==b[i]){
				m++;
			}
		}
	}
	l=strlen(a);
	if(m/l>r){
		my_printf("yes");
	}
	else{
		my_printf("no");
	}
	return 0;
}
