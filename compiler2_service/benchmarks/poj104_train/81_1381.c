#define NUM_ITER 236838

#include <header.h>


int shuzu[5][5];
	int e[5];
	int after[5][5];
	int m,n,row,col,i;
int main_bench()
{
	int exchange(int a,int b);
	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
	my_scanf("%d",&shuzu[row][col]);}}
	my_scanf("%d%d",&m,&n);
	if(exchange(m,n)==0)
	{my_printf("error");}
	else
	{for(row=0;row<5;row++){
	for(col=0;col<5;col++){
		if(col!=4){my_printf("%d ",after[row][col]);}
	else my_printf("%d\n",after[row][col]);}}}

	
	return 0;
}
int exchange(int a, int b){
	if(a>=0&&a<5&&b>=0&&b<5) 
	{for(i=0;i<5;i++){
	e[i]=shuzu[m][i];
	shuzu[m][i]=shuzu[n][i];
	shuzu[n][i]=e[i];}
	for(row=0;row<5;row++){
	for(col=0;col<5;col++){
		after[row][col]=shuzu[row][col];}}
	return 1;}

	else return 0;}