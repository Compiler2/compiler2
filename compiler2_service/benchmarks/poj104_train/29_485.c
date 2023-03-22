#include <header.h>

int main_bench(){
	int n,bc[100],c[100],qnx,i,j;
	float sum;
	my_scanf("%d",&n);
	bc[0]=2;
	bc[1]=3;
	c[0]=1;
	c[1]=2;
	for(i=2;i<100;i++){
		bc[i]=bc[i-2]+bc[i-1];
		c[i]=c[i-2]+c[i-1];
	}
	for(i=0;i<n-1;i++){
		my_scanf("%d",&qnx);
		sum=0;
		for(j=0;j<qnx;j++){
			sum+=1.0*bc[j]/c[j];
		}
		my_printf("%.3f\n",sum);
	}
	my_scanf("%d",&qnx);
		sum=0;
		for(j=0;j<qnx;j++){
			sum+=1.0*bc[j]/c[j];
		}
		my_printf("%.3f",sum);


	return 0;
}