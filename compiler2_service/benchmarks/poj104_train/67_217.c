#define NUM_ITER 33768

#include <header.h>

int main_bench()
{
	int n,allc,curc,all[100],cur[100],i;
	double cp,op[100];
	my_scanf("%d",&n);
	my_scanf("%d%d",&allc,&curc);
	cp=((double)curc)/((double)allc)*100;
	
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d%d",&all[i],&cur[i]);
		op[i]=((double)cur[i])/((double)all[i])*100;
		
	}
	for(i=0;i<n-1;i++)
	{
		if(op[i]-cp>5)my_printf("better\n");
		else if(op[i]-cp<-5)my_printf("worse\n");
		else my_printf("same\n");
	}
	return 0;
}