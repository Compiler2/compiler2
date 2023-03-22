#define NUM_ITER 904758

#include <header.h>

int main_bench(){
	double n,r;
	int l,t,i;
	char a[501],b[501];
	t=0;
	my_scanf("%lf",&n);
	my_scanf("%s%s",&a,&b);
	l=strlen(a);
	if(l!=strlen(b)){
		my_printf("error");
		return 0;
	}
	for(i=0;i<l;i++){
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<l;i++){
		if(a[i]==b[i]) t++;
	}
	r=t*1.0/l;
	if(r>n) my_printf("yes");
	else my_printf("no");
	return 0;
}