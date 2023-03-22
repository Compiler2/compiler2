#include <header.h>

int main_bench()
{
int n,a,b,c,i,m;
my_scanf("%d\n%d\n%d\n",&n,&a,&b);
i=2;
if(a<b){
	m=a;
	a=b;
	b=m;
}
while(i<n){
	my_scanf("%d",&c);
    i+=1;
	if(c>=a){
		b=a;
        a=c;
	}else if(c>=b){
		b=c;
	}
}
my_printf("%d\n%d\n",a,b);
	return 0;
}