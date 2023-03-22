#define NUM_ITER 913114

#include <header.h>

int main_bench(){
	char a[500],b[500];
	int m,n,i,j=0,k=0;
	double x,e;
	my_scanf("%lf",&x);
	my_scanf("%s",a);
	my_scanf("%s",b);
	m=strlen(a);
	n=strlen(b);
	if(m==n){
		for(i=0;i<m;i++){
			if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T'){
				k=1;
				break;
			}
		}
		for(i=0;i<n;i++){
			if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'){
				k=1;
				break;
			}
		}
		if(k!=1)
		{
		for(i=0;i<m;i++){
			if(a[i]==b[i]){
				j+=1;
			}
		}
		e=j*1.0/m;
		if(e>x){
			my_printf("yes");
		}
		else {
			my_printf("no");
		}
		}
		else {
			my_printf("error");
		}
	}
	else {
		my_printf("error");
	}
	return 0;
}



