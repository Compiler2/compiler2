#define NUM_ITER 3373

#include <header.h>

main_bench()
{
	int n,i,j;
	float ave,x,sum=0;
	float a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%f",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;

	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(a[j]>a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}

	if((ave-a[0])<(a[n-1]-ave)) my_printf("%d\n",(int)a[n-1]);
	else if((ave-a[0])>(a[n-1]-ave)) my_printf("%d\n",(int)a[0]);
	else my_printf("%d,%d\n",(int)a[0],(int)a[n-1]);
}