#define NUM_ITER 676

#include <header.h>

int cancer[1000][1000];
int main_bench()
{
	
	int i,n,j,k1,k2,m1,m2,sum=0,s;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			my_scanf("%d",&cancer[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(cancer[i][j]==0){k1=i;m1=j;s=1;break;}
			if(s==1){s=0;break;}
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			if(cancer[i][j]==0){k2=i;m2=j;s=1;break;}
        }
		if(s==1)break;
	}
	for(i=k1;i<=k2;i++)
	{
		for(j=m1;j<=m2;j++)
			if(cancer[i][j]==255)sum++;
	}
	my_printf("%d",sum);

}

