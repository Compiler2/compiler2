#define NUM_ITER 656

#include <header.h>

int main_bench()
{
	int n;
	int area[1000][1000];
	my_scanf("%d",&n);
	int f=1;
	int start1,start2,end1,end2,re;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			my_scanf("%d",&area[i][j]);
			if(area[i][j]==0 && f==1)
			{
				start1=i;
				start2=j;
				f=2;
			}
			if(area[i][j]==0)
			{
				end1=i;
				end2=j;
			}
		}
	}
	re=(end1-start1-1)*(end2-start2-1);
	my_printf("%d",re);
	return 0;
}
