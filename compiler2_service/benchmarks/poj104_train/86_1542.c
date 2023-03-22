#define NUM_ITER 1364

#include <header.h>

int main_bench(){
	int n,m,sum,t,shen,d;
	int ci[100];
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d",&m);
		if(m==0){
			my_printf("60\n");
		}else {
		for(int a=0;a<m;a++){
			my_scanf("%d",&ci[a]);
		}
		for(int b=0;b<m;b++){
			sum=b+1;
			t=ci[b]+3*sum;
			if(t>63){
				shen=60-3*b;
				my_printf("%d\n",shen);
				break;
			}else if(b==m-1&&t<=60){
				shen=60-3*sum;
				my_printf("%d\n",shen);
			}else if(t>60&&t<=63){
				d=t-60;
				shen=60-3*sum+d;
                my_printf("%d\n",shen);
				break;
			}
		}
	}
	}
	return 0;
}