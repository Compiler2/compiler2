#include <header.h>

int main_bench(){
	double x,y;
	int n=0,i,c,d,m=0;
	char a[502],b[502];
	my_scanf("%lf %s %s",&x,a,b);
	c=strlen(a);
	d=strlen(b);

	for(i=0;i<c;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
			m=1;
			break;
		}
	}
	for(i=0;i<d;i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			m=1;
			break;
		}
	}
	if(m==1||c!=d){
		my_printf("error");
	}else{
		for(i=0;a[i],b[i];i++){
			if(a[i]==b[i]){
				n++;
			}
		}
		y=1.0*n/c;
		if(y>x){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	return 0;
}