#define NUM_ITER 39374

#include <header.h>

int main_bench()
{
	int a,b,c,d,i,n;
	d=0;
	c=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			c++;
			if(c>=d){d=c;
			}
		}
		else{c=0;}
	}
	my_printf("%d",d);
	return 0;

}