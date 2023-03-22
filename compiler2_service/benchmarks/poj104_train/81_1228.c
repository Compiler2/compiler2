#define NUM_ITER 234801

#include <header.h>

int main_bench()
{
	int i,j,m,n,sz[5][5],a=0,k,s[5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
	my_scanf("%d",&sz[i][j]);}}
	my_scanf("%d%d",&m,&n);
	if(m>=0&&m<5&&n>=0&&n<5){
	a=1;
	for(k=0;k<5;k++){
	s[k]=sz[m][k];sz[m][k]=sz[n][k];sz[n][k]=s[k];}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			my_printf("%d ",sz[i][j]);}
		my_printf("%d\n",sz[i][4]);}}
	if(a==0){my_printf("error");}
return 0;
}