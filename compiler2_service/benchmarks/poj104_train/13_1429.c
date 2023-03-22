#include <header.h>


int main_bench(){
	int i,n;
	my_scanf("%d",&n);
	int *N
		=(int*)malloc(sizeof(int)*n);
	for(int k=0;k<n;k++)
	{
		my_scanf("%d",&(N[k]));
	}
	for(i=1;i<n;i++)
	{
		for(int r=0;r<i;r++)
		{
		if(N[i]==N[r])
		{
			for(int j=i;j<n;j++)
			{
				N[j]=N[j+1];
			}
			n--;
			i--;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==n-1)
			my_printf("%d",N[i]);
		else
			my_printf("%d ",N[i]);
	}
	return 0;
}