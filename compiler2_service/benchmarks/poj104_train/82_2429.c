#define NUM_ITER 24074

#include <header.h>

int main_bench()
{
	int n,s[100][2],i,j,a[100]={0},m=0,b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			my_scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(s[i][0]>=90&&s[i][0]<=140&&s[i][1]>=60&&s[i][1]<=90){
			a[m]++;
		}else{
			m++;
		}
	}
	b=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>b){
			b=a[i];
		}
	}
	my_printf("%d",b);
	return 0;
}
