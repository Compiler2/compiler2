#define NUM_ITER 1988

#include <header.h>

int main_bench()
{
	int n,m,a[100],i,b[100],j;
	double c[100],sum[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&m);
        for(j=0;j<m;j++){
			a[0]=1;
			b[0]=2;
			a[j+1]=b[j];
			b[j+1]=a[j]+b[j];
		}
		for(j=0;j<m;j++){
             c[j]=1.0*b[j]/a[j];
			 
		}

       for(j=0;j<m;j++)
		   sum[i]+=c[j];
	   }
       for(i=0;i<n;i++)
       my_printf("%.3lf\n",sum[i]);
	   
	   
	return 0;
}