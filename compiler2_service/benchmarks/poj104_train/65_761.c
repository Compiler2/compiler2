#define NUM_ITER 41415

#include <header.h>

int main_bench(){
	int n,a,b,i,m=0,p=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d%d",&a,&b);
		if(a==0){
			if(b==1)
				m++;
			if(b==2)
				p++;
			if(b==0){
				m++;
			    p++;
			}
		}
		if(a==1){
			if(b==0)
				p++;
			if(b==2)
				m++;
			if(b==1){
				m++;
				p++;
			}
		}
		if(a==2){
			if(b==0)
				m++;
			if(b==1)
				p++;
			if(b==2){
				m++;
				p++;
			}
		}
           

	}
	if(m>p)
		my_printf("A");
	else if(m<p)
		my_printf("B");
	else
		my_printf("Tie");
	return 0;
}
