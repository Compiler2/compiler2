#include <header.h>


int main_bench()
{
	int n,i;
	int p[100],pcu[100];
	double per[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&p[i],&pcu[i]);
		per[i]=(double)pcu[i]/p[i]*100;
	}
	for(i=1;i<n;i++){
		if(per[i]-per[0]>5) my_printf("better\n");
		else if(per[0]-per[i]>5) my_printf("worse\n");
		else my_printf("same\n");
	}
	

	return 0;
}
