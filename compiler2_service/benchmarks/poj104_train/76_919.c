#include <header.h>

int main_bench()
{
	int n,d=1,i,j,min,max=0;
	int qd[50000],zd[50000],sz[50000]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&qd[i],&zd[i]);
	}
	min=qd[0];
	for(i=0;i<n;i++){
		if(qd[i]<min){
			min=qd[i];
		}
		if(zd[i]>max){
			max=zd[i];
		}
	}
    for(i=0;i<n;i++){
		for(j=qd[i];j<zd[i];j++){
			sz[j]=1;
		}
	}
	for(i=min;i<max;i++){
		d*=sz[i];
	}
	if(d==0){
		my_printf("no");
	}
	else{
		my_printf("%d %d",min,max);
	}
	return 0;
}
