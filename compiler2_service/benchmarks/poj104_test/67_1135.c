#include <header.h>

int main_bench()
{
	int i,n,a[50],b[50];
	float c[50];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		c[i]=(float)b[i]/a[i];
	}
	for(i=1;i<n;i++){
		if(c[i]-c[0]>0.05)
			my_printf("better\n");
		if(c[0]-c[i]>0.05)
			my_printf("worse\n");
		if(c[0]-c[i]<=0.05&&c[i]-c[0]<=0.05)
			my_printf("same\n");
	}
	return 0;
}