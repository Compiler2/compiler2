#include <header.h>

int main_bench()
{
	int n,s,a,b,i;
	my_scanf("%d\n%d",&n,&s);
	a=s;
	b=s;
	for(i=1;i<n;i++){
		my_scanf("\n%d",&s);
		if(a>s&&b>s){
			a=a;
			b=b;
		}else if(a>s&&b<=s){
			a=a;
			b=s;
		}else{
			b=a;
			a=s;
		}
	}
	my_printf("%d\n%d\n",a,b);
	return 0;
}