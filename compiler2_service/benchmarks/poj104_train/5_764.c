#define NUM_ITER 950109

#include <header.h>

int main_bench(){
	int i,m,n;
	double w,e,k=0.0;
	char a[501],b[501];
	my_scanf("%lf%s%s",&w,&a,&b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<n;i++){
		if(m!=n){
			my_printf("error\n");
			i=n+1;
			break;
		}
		else if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
				my_printf("error\n");
				i=n+1;
				break;
		}
		else if(a[i]==b[i]){
				k=k+1;
				e=1.0*k/n;
		}
	}
	if(e>w&&i==n)
		my_printf("yes\n");
	else if(e<=w&&i==n)
		my_printf("no\n");
	return 0;
}