#define NUM_ITER 1212

#include <header.h>


int main_bench(){
	int i,j,k=0,n,nt,total,flag;
	my_scanf("%d",&k);
	for(i=0;i<k;i++){
		my_scanf("%d",&n);
		flag = 0;
		for(j=0;j<=n;j++){
			if(j<n){
				my_scanf("%d",&nt);
				if((nt+3*j)>=57&&(nt+3*j)<=60){
					total = nt;
					flag = 1;
				}
				if((nt+3*(j+1))>60){
					if(!flag){
						total = 60-j*3;
						flag = 1;
					}
				}
			}
			else{
				if(!flag){
					total = 60-j*3;
				}
			}
		}
		my_printf("%d\n",total);
	}
}