#include <header.h>

int num(int a)
{
	int b;
	b=abs(a);
	while(b%10==0){
		b=b/10;
	}
	if(a>0)return b;
	else return -b;
}
int reverse(int b)
{
	int c=0,d;
	d=abs(b);
	while(d>0){
		c=c*10+d%10;
		d=d/10;
	}
	if(b>0)return c;
	else return -c;
}
int main_bench()
{
	int i=0,x;
	int out[6];
	for(;i<6;i++){
		my_scanf("%d",&x);
		out[i]=reverse(num(x));
	}
	for(i=0;i<6;i++){

	my_printf("%d\n",out[i]);
	}
	return 0;
}
	