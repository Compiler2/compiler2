#define NUM_ITER 4769

#include <header.h>

int main_bench()
{
	int m,i,j,a,b,p,q;
	my_scanf("%d",&m);
	a=m/2;
	for(i=3;i<=a;i++){
		b=0;
		j=m-i;
		if(i==3)
			b=0;			
		else{
			for(p=2;p<i;p++){
				if(i%p==0)
					b=1;
			}
		}
		if(j==3)
			b=0;
		else{
			for(q=2;q<j;q++){
				if(j%q==0)
				b=1;
			}
		}
		if(b==0)
			my_printf("%d %d\n",i,j);
	}
	return 0;
}