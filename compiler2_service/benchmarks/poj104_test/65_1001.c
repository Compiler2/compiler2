#define NUM_ITER 38379

#include <header.h>

int main_bench(){
	int i,a,b,c=0,d=0,e=0,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a==b){
			e++;
		}
		else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			c++;
		else
			d++;
	}
	if(c>d)
		my_printf("A");
	if(d>c)
		my_printf("B");
	if(c==d)
		my_printf("Tie");
	return 0;
	
}