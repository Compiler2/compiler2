#define NUM_ITER 1145

#include <header.h>

int main_bench(){
	int i,u,num,n,a[100],b[100][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		num=a[i]*3;
		for(u=0;u<a[i];u++){
			my_scanf("%d",&b[i][u]);
			if(u*3+b[i][u]>59){
				num-=3;
			}
			if(u*3+b[i][u]==59){
				num-=2;
			}
			if(u*3+b[i][u]==58){
				num-=1;
			}
		}
		my_printf("%d\n",60-num);
	}
	return 0;
}