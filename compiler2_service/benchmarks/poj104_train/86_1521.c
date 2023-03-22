#include <header.h>

int main_bench()
{
	int n,m,t,sum,num[10000],a[10000],i,j;
	my_scanf("%d",&n);
	for(i=1;i<=10000;i++){
		num[i]=0;
		a[i]=1;
	}
	for(i=1;i<=n;i++){
		my_scanf("%d",&m);
		if(m==0){
			my_printf("60\n");
		}else{
			sum=0;
			for(j=1;j<=m;j++){
				my_scanf("%d",&num[j]);
			}
			for(j=1;j<=m;j++){
				num[j]+=3*(j-1);
				t=num[j];
				a[t+1]=0;
				a[t+2]=0;
				a[t+3]=0;
			}
			for(j=1;j<=60;j++){
				sum+=a[j];
			}
			my_printf("%d\n",sum);
			for(j=1;j<=10000;j++){
				num[j]=0;
				a[j]=1;
			}
		}
	}
	return 0;
}