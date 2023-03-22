#include <header.h>


int main_bench()
{
	int n,i;
	double jiwei1,jiwei2,jiweiyx;
	double a[100],b[100],c[100];
	my_scanf("%d",&n);

    my_scanf("%lf %lf",&jiwei1,&jiwei2);
	jiweiyx=(jiwei2/jiwei1)*100;

	for(i=0;i<n-1;i++)
	{
		my_scanf("%lf %lf",&a[i],&b[i]);
		c[i]=(b[i]/a[i])*100;
		if(c[i]-jiweiyx>=5)
		{
			my_printf("better\n");
		}
		if(jiweiyx-c[i]>=5)
		{
			my_printf("worse\n");
		}
		if(jiweiyx-c[i]<=5&&c[i]-jiweiyx<=5) my_printf("same\n");
	}

	return 0;
}
