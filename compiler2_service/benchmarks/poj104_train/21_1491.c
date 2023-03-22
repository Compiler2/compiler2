#define NUM_ITER 49439

#include <header.h>

main_bench()
{
	int n,i;
	float min,max,a[300],sum,aver;
	my_scanf("%d",&n);
	my_scanf("%f",&a[0]);
	min=max=sum=a[0];
    for(i=1;i<n;i++) 
	{
		my_scanf("%f",&a[i]);
		sum=sum+a[i];
		if(max<a[i]) max=a[i];
		else if(min>a[i]) min=a[i];
	}
	aver=sum/n;
	if(max-aver>aver-min) my_printf("%.0f",max);
	else if(max-aver<aver-min) my_printf("%.0f",min);
	else my_printf("%.0f,%.0f",min,max);
	return 0;
}