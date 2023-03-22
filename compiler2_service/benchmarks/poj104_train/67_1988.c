#include <header.h>

int main_bench()
{
	int n, i;
	my_scanf("%d", &n);
	float z[n-1];
	float yx[n-1];
	float x, y;
	for(i=0;i<n;i++){
		my_scanf("%f", &z[i]);
		my_scanf("%f", &yx[i]);
	}
	x=yx[0]/z[0];
	for(i=1;i<n;i++){
		y=yx[i]/z[i];
		if(y-x>0.05)
			my_printf("better\n");
		else if(x-y>0.05)
			my_printf("worse\n");
		else if(x-y<=0.05&&y-x<=0.05)
			my_printf("same\n");
	}
	return 0;
}