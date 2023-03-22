#define NUM_ITER 18118

#include <header.h>

int main_bench()
{
	int i,j,t=1,sum,n;
	my_scanf("%d",&n);
	int x[20000],y[20000];
	for(i=0;i<n;i++) my_scanf("%d",&y[i]);
	x[0]=y[0];
	int k=0;
	for(i=1;i<n;i++)
	{
		sum=1;
		for(j=0;j<=k;j++) sum=sum*(y[i]-x[j]);
		if(sum!=0) {x[k+1]=y[i];k++;}
	}
         my_printf("%d",x[0]);
	for(i=1;i<=k;i++) my_printf(" %d",x[i]);
	my_printf("\n");
	return 0;
}

