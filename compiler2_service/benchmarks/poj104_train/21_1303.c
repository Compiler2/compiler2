#define NUM_ITER 46728

#include <header.h>


int main_bench()
{
	int n,i,t,num[300],sum=0,k,m;
	float a,c[300],mc=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&t);
		num[i]=t;
		sum+=num[i];
	}
	a=(float)sum/(float)n;
	for(i=0;i<n;i++){
		if(num[i]>a)
			c[i]=(float)num[i]-a;
		else
			c[i]=a-(float)num[i];
	}
	for(i=0;i<n;i++){
		if(c[i]>mc){
			mc=c[i];
			k=i;
		}
	}
	for(i=0;i<n;i++){
		if(c[i]>=mc){
			mc=c[i];
			m=i;
		}
	}
	if(m==k)
		my_printf("%d",num[k]);
	else if(num[k]>num[m])
		my_printf("%d,%d",num[m],num[k]);
	else
		my_printf("%d,%d",num[k],num[m]);
	return 0;
}