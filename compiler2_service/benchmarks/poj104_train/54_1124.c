#define NUM_ITER 1

#include <header.h>


int main_bench()
{
	int n,k,i,j,m=0,z;
	my_scanf("%d %d",&n,&k);
	i=1;
	while(m!=n-1){
	z=i*(n-1);
	for(j=0;j<n-1;j++){
		if((z/(n-1)*n+k)%(n-1)==0){
		z=z/(n-1)*n+k;
		m+=1;
		}else{
			m=0;
			break;
		}
	}
	i++;
	}
	z=z/(n-1)*n+k;
	my_printf("%d",z);
	return 0;
}