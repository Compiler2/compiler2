#define NUM_ITER 31056

#include <header.h>

int main_bench(){
	int n,i,s[101][2],r[101],sum,a,sz[101],j,max;
	sum=0;
	j=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&s[i][0],&s[i][1]);
	}
	for(i=0;i<n;i++){
		if((s[i][0]>=90)&&(s[i][0]<=140)&&(s[i][1]>=60)&&(s[i][1]<=90)){
			r[i]=1;
		}else{
			r[i]=0;
		}
	}
	r[n]=0;
	for(i=0;i<n;i++){
		sz[i]=0;
	}
	for(i=0;i<n-1;i++){
		if((r[i]==1)&&(r[i+1]==1)){
			sum++;
		}
		if(r[i+2]==0){
			sz[j]=sum;
			j++;
			sum=0;
		}
	}
	max=sz[0];
	for(i=0;i<j;i++){
		if(sz[i]>max){
			max=sz[i];
		}
	}
	sum=max;
    for(i=0;i<n;i++){
		if(r[i]!=0){
			a=1;
			break;
		}else{
			a=0;
		}
	}
	my_printf("%d",sum+a);
    return 0;
}