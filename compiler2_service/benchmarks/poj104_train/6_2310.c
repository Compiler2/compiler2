#include <header.h>

int main_bench(){
    int k,k1,m,n,i,j,answer;
    int sz[102][102];
    my_scanf("%d",&k);
for(k1=1;k1<=k;k1++){
	answer=0;
	my_scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++){
                       for(j=1;j<=n;j++){
                                          my_scanf("%d",&sz[i][j]);
                       }
    }
    if(m==1&&n==1){
		answer=sz[1][1];
		}
	else if(m==1){
		for(j=1;j<=n;j++){
		              answer=answer+sz[1][j];
		}
	}
	else if(n==1){
		for(i=1;i<=m;i++){
		              answer=answer+sz[i][1];
		}
	}
    if(m!=1&&n!=1){
		for(j=1;j<=n;j++){
		              answer=answer+sz[1][j]+sz[m][j];
		}
        for(i=2;i<m;i++){
                      answer=answer+sz[i][1]+sz[i][n];
        }
    }
    my_printf("%d\n",answer);
}
 return 0;
}