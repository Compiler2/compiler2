#define NUM_ITER 6488

#include <header.h>


int main_bench(){
int n,i,a,d,k,p,q;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d",&a);
	p=1;
	q=1;
	if(a==1||a==2){
		my_printf("%d\n",q);
	}
	else if(a>2){
		for(k=0;k<a-2;k++){
		d=p+q;
		p=q;
		q=d;
		}
     	my_printf("%d\n",q);

	}
}
 return 0;
}