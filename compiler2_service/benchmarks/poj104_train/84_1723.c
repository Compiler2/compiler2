#include <header.h>

int main_bench()
{
	int n,a,b,c,i;
	my_scanf("%d\n",&n);
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	while(n-2)
	{my_scanf("%d",&c);
	if(b>a) {if(a>c) {i=b;b=a;a=i;}
	          else {if(b>c) {a=b;b=c;}
			       else a=c;} }
    else {if(b<c) {if(a<c) {b=a;a=c;}
	               else b=c;}}
         n=n-1;
	}
	my_printf("%d\n",a);
	my_printf("%d",b);
	return 0;
}
