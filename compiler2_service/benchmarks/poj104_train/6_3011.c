#define NUM_ITER 31

#include <header.h>

int main_bench()
{
	int n,i=0,j=0,k=0,x,y,an[100][100],sum[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&x,&y);
		for(j=0;j<x;j++){
			for(k=0;k<y;k++){
				my_scanf("%d",&an[j][k]);
				if(j==0||j==x-1||k==0||k==y-1){
					sum[i]+=an[j][k];
				}
			}
		}
	}
	for(i=0;i<n;i++){
		my_printf("%d\n",sum[i]);
	}
	return 0;
}