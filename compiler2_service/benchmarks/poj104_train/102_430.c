#define NUM_ITER 1853

#include <header.h>

int main_bench()
{
	int n,i,k;
	char zfc[100][20],ex[20];
	double h[100],mi;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s%lf",zfc[i],&h[i]);
	}
	for(k=1;k<n;k++)
	{
		for(i=0;i<n-k;i++)
		{
			if((strcmp(zfc[i],"female")==0&&strcmp(zfc[i+1],"male")==0)||(strcmp(zfc[i],"male")==0&&strcmp(zfc[i+1],"male")==0&&h[i]>h[i+1])||(strcmp(zfc[i],"female")==0&&strcmp(zfc[i+1],"female")==0&&h[i]<h[i+1]))
			{
				strcpy(ex,zfc[i]);
				strcpy(zfc[i],zfc[i+1]);
				strcpy(zfc[i+1],ex);
				mi=h[i];
				h[i]=h[i+1];
				h[i+1]=mi;
			}
		}
	}
	my_printf("%.2lf",h[0]);
	for(i=1;i<=n-1;i++)
	{
		my_printf(" %.2lf",h[i]);
	}
	return 0;
}
