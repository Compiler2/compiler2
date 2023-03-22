#define NUM_ITER 37135

#include <header.h>

int main_bench(){
    int n,a,b,t,i,c;
	my_scanf("%d\n",&n);
	t=0;
	c=0;
	i=1;
	while(i<=n-1){
		my_scanf("%d%d\n",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			t++;
			if(c<t)
				c=t;
		}
		else
			t=0;
		i++;
	}
    my_scanf("%d%d",&a,&b);
	if(a>=90&&a<=140&&b>=60&&b<=90){
			t++;
			if(c<t)
				c=t;
	}
	my_printf("%d",c);
   return 0;
}