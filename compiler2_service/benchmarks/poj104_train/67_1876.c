#define NUM_ITER 29149

#include <header.h>

int main_bench()
{
	int n,i,sz[100][100],j;
	double a,b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			my_scanf("%d",&sz[i][j]);}}
    a=1.0*sz[0][1]/sz[0][0];
	for(i=1;i<n;i++){
	b=1.0*sz[i][1]/sz[i][0]-a;
	if(b>0.05){my_printf("better\n");}
	if(b<-0.05){my_printf("worse\n");}
	if(b<0.05&&b>-0.05){my_printf("same\n");}}
return 0;
}