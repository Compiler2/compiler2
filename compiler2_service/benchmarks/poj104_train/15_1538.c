#include <header.h>

int main_bench()
{
	int n,i,j,s=0,f=1,a1,a2,b1,b2;
	int area[100][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&area[i][j]);
			if (area[i][j]==0&&f==1)
			{
				a1=i;
				b1=j;
				f=0;
			}
			if(area[i][j]==0)
			{
				a2=i;
				b2=j;
			}
		}
	}
	s=(a2-a1+1)*(b2-b1+1)-2*(a2-a1+1)-2*(b2-b1-1);
	my_printf("%d",s);
	return 0;
}