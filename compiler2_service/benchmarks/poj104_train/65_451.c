#define NUM_ITER 37102

#include <header.h>

int main_bench(){
	int n,a[200],b[200],i,c,d;
	c=0;
	d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
			c=c+1;
		else if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1))
			d=d+1;
	}
	if(c==d)
		my_printf("Tie\n");
	else if(c>d)
		my_printf("A\n");
	else
		my_printf("B\n");
	return 0;
}