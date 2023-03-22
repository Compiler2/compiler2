#include <header.h>

int main_bench()
{
	int N;
	my_scanf("%d",&N);
	int i,sz[1000];
	double sum=1;
	for(i=1;i<=N;i++){
		sz[i]=2;
		sum=sum*sz[i];
	}
	my_printf("%.0lf",sum);
	return 0;
}