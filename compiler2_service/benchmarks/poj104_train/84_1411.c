#include <header.h>

int main_bench(){
	int i,n,a,b,c,d,e;
	my_scanf("%d\n%d",&n,&e);
	b=e;
	c=e;
	for(i=2;i<=n;i++)
	{
		my_scanf("%d",&a);
		if(a>=b) {
			d=b;	
		    b=a;
		if(b>d)	c=d;
		}
		else if(a<b&&a>c) e=a;
		if(e>c) c=e;
	
	}
	my_printf("%d\n%d\n",b,c);
	return 0;
}