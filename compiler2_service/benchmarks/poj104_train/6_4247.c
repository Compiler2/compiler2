#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int k, i, j, l, m, n;
	int	a[100][100]={0}, sum=0;
		
	my_scanf("%d",&k);  
	
	for(i=0;i<k;i++){
		my_scanf("%d%d", &m, &n);  
		for(j=0;j<m;j++)
			for(l=0;l<n;l++)
				my_scanf("%d", *(a+j)+l );  
		sum=0;
		if(m!=1){
			for(j=0; j<n; j++)
				sum = sum+ *(*a+j) + *(*(a+m-1)+j);  
		}
		else{
			for(j=0;j<n;j++)
				sum = sum + *(*a+j);  
		}
		for(j=1; j<m-1; j++)
			sum = sum + *(*(a+j))+*(*(a+j)+n-1);

		my_printf("%d\n",sum);
	}

    return 0;
}