#include <header.h>

int print(int n);
int main_bench()
{int n;
my_scanf("%d",&n);
print(n);
return 0;
}
int print(int n){
	int s,a,b;
	a=n;
	s=0;
	if(a==0)
		my_printf("0");
	else {
	while(a>0){
		b=a%10;
		my_printf("%d",b);
		a=a/10;
	}
	}
return 0;
}
