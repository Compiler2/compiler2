#include <header.h>

int main_bench(){
	double a,m,n,p;
	int l,k,q,i;
	char b[500],c[500];
	k=0;
	my_scanf("%lf",&a);
	my_scanf("%s\n%s",b,c);
	l=strlen(b);
	q=strlen(c);
	if(l!=q){
		my_printf("error");
		return 0;
	}
	for(i=0;i<l;i++){
		if((b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')||(c[i]!='A'&&c[i]!='T'&&c[i]!='C'&&c[i]!='G')){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<l;i++){
		if(b[i]==c[i]){
			k++;
		}
	}
	m=l;
	n=k;
	p=n/m;
	if(p>a){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}
	
			


		
