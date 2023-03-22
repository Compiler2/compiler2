#define NUM_ITER 12806

#include <header.h>

int main_bench()
{
	int i,j,n,m,k=0,max[8]={0},min[8];
	int sz[8][8];
	my_scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(sz[i][j]>max[i]){
				max[i]=sz[i][j];
			}
		}
	}
	for(j=0;j<m;j++){
		min[j]=sz[0][j];
		for(i=0;i<n;i++){
			if(sz[i][j]<min[j]){
				min[j]=sz[i][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(sz[i][j]==max[i]&&sz[i][j]==min[j]){
				sz[i][j]=1;
			}
			else{
				sz[i][j]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(sz[i][j]==1){
				my_printf("%d+%d",i,j);
				k++;
			}
		}
	}
	if(k==0){
		my_printf("No");
	}
	return 0;
}
