#define NUM_ITER 36521

#include <header.h>


int main_bench()
{
	int n,i,j[100]={0},s[100][2],l=0,max=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d",&s[i][0],&s[i][1]);
	}
	for(i=0;i<n-1;i++)
	{
		if(s[i][0]<=140&&s[i][0]>=90&&s[i][1]<=90&&s[i][1]>=60)
		{
			
			j[l]++;
			if(s[i+1][0]>140||s[i+1][0]<90||s[i+1][1]>90||s[i+1][1]<60)
			{
				l++;
				
			}
		}
	
	}
	if(s[n-2][0]<=140&&s[n-2][0]>=90&&s[n-2][1]<=90&&s[n-2][1]>=60)
	{
		if(s[n-1][0]<=140&&s[n-1][0]>=90&&s[n-1][1]<=90&&s[n-1][1]>=60)
			j[l]++;
	}
	
	else
	{
		if(s[n-1][0]<=140&&s[n-1][0]>=90&&s[n-1][1]<=90&&s[n-1][1]>=60)
			j[l]=1;
	}
	

	for(i=0;i<l+1;i++)
	{
		if(j[i]>max)
			max=j[i];
	}
	my_printf("%d",max);

	

	return 0;
}