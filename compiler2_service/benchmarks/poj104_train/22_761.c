#define NUM_ITER 372

#include <header.h>

int main_bench()
{
	unsigned int a[400]={0};
	char b[500];
	int i,j,t;
	for(i=1;i<=310;i++)
	{
		my_scanf("%d",&a[i]);
		if(getchar()=='\n') break;
	}
	for(i=1;i<=300;i++)
	{
		for(j=1;j<=300;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=1;i<=300;i++)
	{
        	if(a[i+1]==0)
				my_printf("No\n");
			if(a[i+1]==0) break;
			if((a[i]-a[i+1])!=0)
			my_printf("%d\n",a[i+1]);
			if((a[i]-a[i+1])!=0) break;
	}
	if(i==300)
		my_printf("No\n");
return 0;
}