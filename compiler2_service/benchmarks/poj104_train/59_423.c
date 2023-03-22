#include <header.h>

int main_bench(){
	int k[101][101];
	char di;
	int i,j,n,m;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			my_scanf("%c\n",&di);
			if(di=='#')
				k[i][j]=2;
			else if(di=='@')
				k[i][j]=1;
			else if(di=='.')
				k[i][j]=0;
		}
	}
	my_scanf("%d",&m);

	int p;
	for(p=1;p<=m-1;p++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(k[i][j]==1){
					if(i-1>=0){
						if(k[i-1][j]==0){
							k[i-1][j]=-1;
						}
					}
					if(i+1<=n-1){
						if(k[i+1][j]==0){
							k[i+1][j]=-1;
						}
					}
					if(j-1>=0){
						if(k[i][j-1]==0){
							k[i][j-1]=-1;
						}
					}
					if(j+1<=n-1){
						if(k[i][j+1]==0){
							k[i][j+1]=-1;
						}
					}
				}
			}
		
		}
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(k[i][j]==-1)
				k[i][j]=1;
		}
		}
	}
	int sum=0;
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(k[i][j]==1){
				sum++;
			}
		}
		}
		my_printf("%d",sum);
		return 0;
}