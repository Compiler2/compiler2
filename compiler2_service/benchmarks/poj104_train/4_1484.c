#define NUM_ITER 552

#include <header.h>

int main_bench()
{
	int n,m,i=0,an[100][100],j=0,k=0,s=0;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			my_scanf("%d",&an[i][j]); 
		}
	}
	for(k=0;k<n+m-1;k++){
		if(n<m){
			if(k<m-1){
				for(i=0,j=0;i<n&&j<=k;i++,j++){
					my_printf("%d\n",an[i][k-j]);
				}
			}
			else if(k>=m-1){
				for(i=m-1,j=k-m+1;j<n;i--,j++){
					my_printf("%d\n",an[j][i]);
				}
			}
		}
		else{
			if(k<m-1){
				for(i=0,j=0;i<m&&j<=k;i++,j++){
					my_printf("%d\n",an[i][k-j]);
				}
			}
			else if(k>=m-1){
				for(i=m-1,j=k-m+1;i>=0&&j<n;i--,j++){
					my_printf("%d\n",an[j][i]);
				}
			}
		}
	}
	return 0;
}