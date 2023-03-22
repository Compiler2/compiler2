#include <header.h>

int main_bench()
{
 	int sz[100][100];
 	int m,n,row,col,k;
 	my_scanf("%d %d",&m,&n);
 	for(row=0;row<m;row++){
			for(col=0;col<n;col++){
				my_scanf("%d",&sz[row][col]);
				}
			}
	for(k=0;k<m+n-1;k++){
		for(col=k,row=k-col;col<m+n-1&&col>=0;col--,row++){
			if(col>=n){
				continue;
				}
			else{
				if(row>=m){
					continue;
					}
				else my_printf("%d\n",sz[row][col]);
				}
			}
		}
 	
    return 0;
}