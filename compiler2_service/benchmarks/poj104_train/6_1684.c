#define NUM_ITER 29

#include <header.h>

int main_bench(){
	int i,j,m,n,k,sum=0,x,q,w,e,r;
	int ss[100];
	int sz[100][100];
	my_scanf("%d",&k);
	for(x=0;x<k;x++){
	my_scanf("%d %d",&m,&n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			my_scanf("%d ",&sz[i][j]);}
	}
	q=0;
	w=0;
	e=0;
	r=0;
	for(j=0;j<n;j++){
		q=q+sz[0][j];}
	for(j=0;j<n;j++){
		w=w+sz[m-1][j];}
	for(i=1;i<m-1;i++){
		e=e+sz[i][0];}
	for(i=1;i<m-1;i++){
		r=r+sz[i][n-1];}
	sum=q+w+e+r;
	
	my_printf("%d\n",sum);
	}
	return 0;
}
