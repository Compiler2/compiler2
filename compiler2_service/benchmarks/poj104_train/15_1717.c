#include <header.h>

int main_bench()
{
	int n,s=0,u;
	int image[100][100];
	my_scanf("%d",&n);
	for(int row=0;row<n;row++)
	{
		for(int col=0;col<n;col++)
		{
			my_scanf("%d",&(image[row][col]));
		}
	}
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=0;j<n;j++)
		{
			if(image[i][j]==0)
			{

				k++;	
			}
		}
		if(k>0)
		{
			u=k;
			s++;
		}
		
	}
	int m=(u-2)*(s-2);
	my_printf("%d",m);
	return 0;
}