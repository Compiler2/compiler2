#include <header.h>

int main_bench()
{
	int n;
	int fm[100];
	int fz[100];
	double sun=0;
	int i,j;
	double fs[100];
    fm[0]=1;
	fm[1]=2;
	fz[0]=2;
	fz[1]=3;
	int m;
	my_scanf("%d",&m);
	for(j=0;j<=m-1;j++)
	{
		sun=0;
		my_scanf("%d",&n);
		
		for(i=2;i<=n-1;i++)
		{
			fm[i]=fm[i-1]+fm[i-2];
			fz[i]=fz[i-1]+fz[i-2];
		}
		for(i=0;i<=n-1;i++)
		{
			
			fs[i]=fz[i]*1.0/fm[i];
			sun+=fs[i];
		}
		my_printf("%.3lf",sun);
		my_printf("\n");
	}
	
	
	
	
	return 0;
}

