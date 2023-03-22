#define NUM_ITER 35463

#include <header.h>

int main_bench()
{
	int n,a,b,cout=0,r=0,sz[100]={0};
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{
			sz[r]++;
		}
		else
			r++;
	}
	int max=0;
	for(int j=0;j<100;j++){
		if(sz[j]>max)
			max=sz[j];
	}
	my_printf("%d\n",max);
	return 0;
}
