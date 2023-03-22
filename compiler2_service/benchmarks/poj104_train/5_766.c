#define NUM_ITER 934029

#include <header.h>

int main_bench() {
	int i,j,l,k=0;
	double m;
	char a[500],b[500];
	my_scanf("%lf",&m);
	my_scanf("%s",a);
	my_scanf("%s",b);
	j=strlen(a);
	l=strlen(b);
	if(j!=l){
		my_printf("error");
		return 0;
	}
	for(i=0;i<j;i++){
		if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<j;i++){
		if(a[i]==b[i]){
			k++;
		}
	}
	if(1.0*k/j>m){
		my_printf("yes");
	}
	else{
		my_printf("no");
	}
	return 0;
}