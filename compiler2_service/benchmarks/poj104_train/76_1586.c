#define NUM_ITER 17089

#include <header.h>

int main_bench(){
	int n,sz[50000][5],i,j,min,max,s,S;
	double q;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	j=0;
	for(i=0;i<n;i++){
		if(i==0){
			min=sz[i][j];
		}
		else if(sz[i][j]<=min){
			min=sz[i][j];
		}
	}
	j=1;
	for(i=0;i<n;i++){
		if(i==0){
			max=sz[i][j];
		}
		else if(sz[i][j]>=max){
			max=sz[i][j];
		}
	}
	S=1;
	for(q=min+0.3;q<=max;q++){
		s=1;
		for(i=0;i<n;i++){
			if(q>=sz[i][0]&&q<=sz[i][1]){
				s=s*0;
				break;
			}
			else{
				s=s*1;
			}
		}
		if(s==0){
			S=S*1;
		}
		else{
			S=S*0;
		}
	}
	if(S==1&&n>=3){
		my_printf("%d %d",min,max);
	}
	else{
		my_printf("no");
	}
	return 0;
}