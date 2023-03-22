#define NUM_ITER 14610

#include <header.h>

int main_bench()
{
	int i,a[100],b[100],c[100],d[100],e[100],f[100],sum[100]={0};
	for(i=0;i<100;i++){
		my_scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0){
			break;
		}
		sum[i]=(12+d[i]-a[i])*3600+e[i]*60+f[i]-b[i]*60-c[i];
		my_printf("%d\n",sum[i]);
		sum[i]=0;
	}
	return 0;
}