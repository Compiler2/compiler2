#define NUM_ITER 892115

#include <header.h>

int main_bench(){
	double m,n;
	int i,l,s=0,q=0;
	char a[550],b[550];
	my_scanf("%lf",&m);
	my_scanf("%s",a);
	my_scanf("%s",b);
	l=strlen(a);
	if(l!=strlen(b)){
		q=1;
	}
	for(i=0;i<l;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
			q=1;
		}
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			q=1;
		}
	}
	if(q==0){
		for(i=0;i<l;i++){
			if(a[i]==b[i]){
				s+=1;
			}
		}
		n=1.00*s/l;
		if(m<n){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	if(q==1){
		my_printf("error");
	}
	return 0;
}