#include <header.h>

int main_bench(){
	int n,a,b,c,d,e;
	my_scanf("%d",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	d=(n-a*10000-b*1000-c*100)/10;
	e=n%10;
	if(d==0){
		my_printf("%d\n",e);
	}else if(c==0){
		my_printf("%d%d\n",e,d);
	}else if(b==0){
		my_printf("%d%d%d\n",e,d,c);
	}else if(a==0){
		my_printf("%d%d%d%d\n",e,d,c,b);
	}else{
		my_printf("%d%d%d%d%d\n",e,d,c,b,a);
	}
	return 0;
}


