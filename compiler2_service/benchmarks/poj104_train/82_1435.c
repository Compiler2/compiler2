#define NUM_ITER 28974

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int xueya[100][2];
	int shijian[100];
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&xueya[i][0],&xueya[i][1]);
		if(xueya[i][0]>=90&&xueya[i][0]<=140&&xueya[i][1]>=60&&xueya[i][1]<=90)
		{
			shijian[i]=1;
		}
		else 
		{
			shijian[i]=0;
		}
	}
	int duan[100];
	for(i=0;i<n;i++)
	{
		duan[i]=0;
	}

	int j=0;
	for(i=0;i<n;i++)
	{
		if(shijian[i]==1)
		{
			duan[j]++;
		}
		else if(shijian[i]==0)
		{
			j++;
		}
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		if(duan[i]>max)
		{
			max=duan[i];
		}
	}
	my_printf("%d",max);



	return 0;
}