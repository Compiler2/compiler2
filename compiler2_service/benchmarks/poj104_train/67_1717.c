#include <header.h>

int main_bench()
{
	int n,i,k;
	my_scanf("%d",&n);
	double *yx=(double*)malloc(sizeof(double)*n);
	for(i=0;i<n;i++){
	int sz[2];
	for(k=0;k<2;k++){
	my_scanf("%d",&sz[k]);
	}
	yx[i]=(double)sz[1]/sz[0];
	}
	for(i=1;i<n;i++){
		if(yx[i]-yx[0]>0.05){
	my_printf("better\n");}
		else if(yx[0]-yx[i]>0.05){my_printf("worse\n");}
		else {my_printf("same\n");}}
	free(yx);
	return 0;
	
}