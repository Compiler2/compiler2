#define NUM_ITER 10176

#include <header.h>

int main_bench()
{
	struct std
	{
		char name[21];
		int cj;
		int py;
		char gb;
		char xb;
		int lw;
		int sum;
	}std[100];

	int n,i,max,sum=0;

	my_scanf("%d",&n);

	for(i=0;i<n;i=i+1)
	{
		my_scanf("%s %d %d %c %c %d",&std[i].name,&std[i].cj,&std[i].py,&std[i].gb,&std[i].xb,&std[i].lw);

		std[i].sum=0;

		if(std[i].cj>80&&std[i].lw>=1) std[i].sum=std[i].sum+8000;
		else;

		if(std[i].cj>85&&std[i].py>80) std[i].sum=std[i].sum+4000;
		else;

		if(std[i].cj>90) std[i].sum=std[i].sum+2000;
		else;

		if(std[i].xb=='Y'&&std[i].cj>85) std[i].sum=std[i].sum+1000;
		else;

		if(std[i].gb=='Y'&&std[i].py>80) std[i].sum=std[i].sum+850;
		else;

		sum=sum+std[i].sum;
	}

	for(i=1,max=std[0].sum;i<n;i=i+1)
	{
		if(max<std[i].sum) max=std[i].sum;
		else;
	}

	for(i=0;i<n;i=i+1)
	{
		if(std[i].sum==max)
		{
			my_printf("%s\n",std[i].name);
			my_printf("%d\n",std[i].sum);
			my_printf("%d\n",sum);
			break;
		}
	}
}