#define NUM_ITER 3732

#include <header.h>

int main_bench()
{
	int n,a[100],j,i;
	float b[100],c[100],d[100],sum=3.500;
	c[0]=1.0;
	c[1]=2.0;
	d[0]=2.0;
	d[1]=3.0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=3.5;
		if(a[i]==1){
			my_printf("2.000\n");
		}
		else if(a[i]==2){
			my_printf("3.500\n");
		}
		else{
		for(j=2;j<a[i];j++){
			c[j]=c[j-1]+c[j-2];
			d[j]=d[j-1]+d[j-2];
			b[j]=d[j]/c[j];
			sum=sum+b[j];
		}
		my_printf("%.3f\n",sum);
		}
	}
	return 0;
}