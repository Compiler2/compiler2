#include <header.h>

int main_bench(){
	int a=0,b=0,n,i,c,d,e,f;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d%d",&c,&d);
		e=d-c;
		f=c-d;
		if(e==1||f==2)a++;
		else if(f==1||e==2)b++;
	}
	if(a>b)my_printf("A");
	else if(b>a)my_printf("B");
	else my_printf("Tie");
	return 0;

}