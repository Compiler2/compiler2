#define NUM_ITER 1718348

#include <header.h>

int main_bench()
{
	int i,n,a=0,b=0,c=0,d=0,e=0,f=0;
	my_scanf("%d",&n);
	for(i=n;i>=100;i=i-100)
		a++;
	for(i;i>=50;i=i-50)
		b++;
	for(i;i>=20;i=i-20)
		c++;
	for(i;i>=10;i=i-10)
		d++;
	for(i;i>=5;i=i-5)
		e++;
	f=i;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
	return 0;
}