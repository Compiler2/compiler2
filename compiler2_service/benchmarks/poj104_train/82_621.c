#include <header.h>

int main_bench()
{
	int n,i,j;
	int hour[100]={0};
	my_scanf("%d",&n);
	int data[100][2];
	for(i=0,j=0;i<n;i++)
	{
		my_scanf("%d%d",&data[i][0],&data[i][1]);
		if(data[i][0]>=90&&data[i][0]<=140&&data[i][1]>=60&&data[i][1]<=90)
			hour[j]++;
		else j++;
	}
	int j0=j;
	int h=0;
	for(j=0;j<=j0;j++)
	{
		if(h<hour[j])h=hour[j];
	}
	my_printf("%d",h);
	return 0;
}