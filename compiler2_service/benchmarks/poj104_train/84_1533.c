#include <header.h>

int main_bench(){
	int a,b,c,d,e,f;
	int i=1;
	my_scanf("%d",&a);
	my_scanf("%d%d",&b,&c);
	d=(b>=c)?b:c;
	e=(b<=c)?b:c;
	for(i=3;i<=a;i++){
		my_scanf("%d",&f);
		if(d<=f){
			e=d;
			d=f;
		}
		else{
			e=(e>=f)?e:f;
		}
	}
	my_printf("%d\n%d",d,e);
	return 0;
}