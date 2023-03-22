#include <header.h>

int main_bench(){
	char sz[102][102]={0};
	int szs[102][102]={0};
	int n,m,i,j,s=0,k;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			my_scanf(" %c",&sz[i][j]);
			if(sz[i][j]=='@'){
				s++;
			}
		}
	}
	my_scanf("%d",&m);
	for(k=0;k<m-1;k++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(sz[i][j]=='@'){
					szs[i][j]=1;
				}
			}
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(szs[i][j]==1){
					if(sz[i-1][j]=='.'){
						sz[i-1][j]='@';
						s++;
					}
					if(sz[i+1][j]=='.'){
						sz[i+1][j]='@';
						s++;
					}
					if(sz[i][j+1]=='.'){
						sz[i][j+1]='@';
						s++;
					}
					if(sz[i][j-1]=='.'){
						sz[i][j-1]='@';
						s++;
					}
				}
			}
		}
	}
	my_printf("%d",s);
	return 0;
}