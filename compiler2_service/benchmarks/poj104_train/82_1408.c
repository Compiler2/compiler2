#define NUM_ITER 30849

#include <header.h>

int main_bench(){
	int i,x,c,n;
	int sz[200];
	x=0;
	c=0;
	my_scanf("%d",&n);
	for(i=1;i<=(n*2);i++){
		my_scanf(" %d",&sz[i]);
	}
	for(i=1;i<=(n*2-1);i+=2){
		if(sz[i]>=90&&sz[i]<=140&&sz[(i+1)]<=90&&sz[(i+1)]>=60){
			x++;
		}else{
			if(x>=c){
			c=x;
		x=0;
		}
			x=0;
	}
	}
	if(x>=c){
			c=x;
		x=0;
	}
		my_printf("%d", c);
		return 0;

	}
