#define NUM_ITER 155

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,i;
	for(i=0;i<10000;i++){
		my_scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;}		
		a=(12-a)*3600+d*3600;
		b=b*60+c;
		c=e*60+f;
		e=a+c-b;
		my_printf("%d\n", e);}
	return 0;
}