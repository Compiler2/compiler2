#include <header.h>

int main_bench() 
{ 
	int n,i;
	my_scanf("%d",&n);
	double s[100][2],z[100];
	for(i=0;i<n;i++)
	{
		my_scanf("%lf",&s[i][0]);
		my_scanf("%lf",&s[i][1]);
		z[i]=s[i][1]/s[i][0];
	}
	for(i=1;i<n;i++)
	{
        if(z[i]-z[0]>0.05)
			my_printf("better\n");
		else if(z[0]-z[i]>0.05)
			my_printf("worse\n");
		else
			my_printf("same\n");
	}
	return 0;
}