#define NUM_ITER 6613

#include <header.h>

int main_bench() {
	int n,a,i,p,q,result;
	my_scanf("%d",&n);
	while(n--){
		my_scanf("%d",&a);

		if((a==1)||(a==2)){
			my_printf("1\n");
		}

		else{
			p=1;
			q=1;
			for(i=2;i<a;i++){
				result=p+q;
				p=q;
				q=result;
			}
			my_printf("%d\n",result);
		}

	}
	return 0; 
}