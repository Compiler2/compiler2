#include <header.h>

int main_bench(){
	int i,j,k,m,n,a=0,b=0,c=1;
	int sz[50000][2],sz1[10000];
	my_scanf("%d",&n);
	for(j=0;j<n;j++){
		for(i=0;i<2;i++){
			my_scanf("%d",&(sz[j][i]));
		}
	}
	k=sz[0][0];
	for(j=0;j<n;j++){
		for(i=0;i<2;i++){
			if(k<sz[j][i]){
				k=sz[j][i];
			}
		}
	}
	m=sz[0][0];
	for(j=0;j<n;j++){
		for(i=0;i<2;i++){
			if(m>sz[j][i]){
				m=sz[j][i];
			}
		}
	}
	for(i=0;i<k;i++){
		sz1[i]=0;
	}
	for(j=0;j<n;j++){
		a=sz[j][0];
		b=sz[j][1];
		for(i=a;i<b;i++){
			sz1[i]=1;
		}
		if(b==k){
			sz1[k]=1;
		}
	}
	for(i=m;i<k;i++){
		if(sz1[i]==0){
			c=0;
		}
	}
	if(c==0){
		my_printf("no");
	}else{
		my_printf("%d ",m);
		my_printf("%d",k);
	}
	return 0;
}
