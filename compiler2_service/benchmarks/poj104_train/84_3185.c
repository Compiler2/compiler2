#define NUM_ITER 5736

#include <header.h>

int main_bench()
{
	int x,i,j,t,sz[100];
	my_scanf("%d\n",&x);	
	for(i=0;i<x;i++){
		my_scanf("%d\n",&sz[i]);		
	}
	for(i=x;i<100;i++){
	sz[i]=0;
	}
	for(j=0;j<99;j++)
		for(i=0;i<99-j;i++){
			if(sz[i]>sz[i+1]){
		t=sz[i];sz[i]=sz[i+1];sz[i+1]=t;
			}
		}
		my_printf("%d\n%d\n",sz[99],sz[98]);
	return 0;
}