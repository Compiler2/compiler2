#include <header.h>

int main_bench()
{
	int i,a[200][6],total,c=0;
	for(i=0;i<200;i++)
	{
		my_scanf("%d %d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4],&a[i][5]);
		c++;
		if(a[i][0]==0&&a[i][1]==0&&a[i][2]==0) break;
	}
	for(i=0;i<c-1;i++)
	{
		total=((12+a[i][3])*3600+a[i][4]*60+a[i][5])-(a[i][0]*3600+a[i][1]*60+a[i][2]);
		my_printf("%d\n",total);
	}
	return 0;
}
