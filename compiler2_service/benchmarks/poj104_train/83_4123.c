#define NUM_ITER 40782

#include <header.h>

int main_bench()
{
	int n,i;
	float zong;
	float sump=0.0;
	int sumxuefen=0;
	float p[10];
	int g[10];
	int xuefen[10];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&xuefen[i]);
	for(i=0;i<n;i++){
		my_scanf("%d",&g[i]);
		if(g[i]>=90)
			p[i]=4.0*xuefen[i];
		else if(g[i]>=85)
			p[i]=3.7*xuefen[i];
		else if(g[i]>=82)
			p[i]=3.3*xuefen[i];
		else if(g[i]>=78)
			p[i]=3.0*xuefen[i];
		else if(g[i]>=75)
			p[i]=2.7*xuefen[i];
		else if(g[i]>=72)
			p[i]=2.3*xuefen[i];
		else if(g[i]>=68)
			p[i]=2.0*xuefen[i];
		else if(g[i]>=64)
			p[i]=1.5*xuefen[i];
		else if(g[i]>=60)
			p[i]=1.0*xuefen[i];
		else p[i]=0.0;
	}
	for(i=0;i<n;i++){
		sump+=p[i];
		sumxuefen+=xuefen[i];
	}
	zong=(float)sump/sumxuefen;
	my_printf("%.2f",zong);
	return 0;
}