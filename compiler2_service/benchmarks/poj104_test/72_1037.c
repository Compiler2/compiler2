#define NUM_ITER 533

#include <header.h>

int main_bench()
{
int sz[255][255];
int m,n,a,i,j,row,col;
a=0;
my_scanf("%d %d",&m,&n);
for(row=0;row<m;row++){
	for(col=0;col<n;col++){
		my_scanf("%d",&sz[row][col]);
	}
}
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		if(sz[i][j]-sz[i][j+1]>=0&&sz[i][j]-sz[i][j-1]>=0&&sz[i][j]-sz[i-1][j]>=0&&sz[i][j]-sz[i+1][j]>=0)
		my_printf("%d %d\n",i,j);
	}
}


return 0;
}