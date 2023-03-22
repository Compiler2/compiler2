#include <header.h>

int group[1000]={0};
int main_bench()
{
	int n,i,m,k,j,a=0,b=0;
	
	my_scanf("%d%d",&m,&n);
	for (i=m;i<=n;i++)
	{
		int num=0;
		if (i%2==0)
		{
			a=1;			
		}
		else 
		{
			for (j=3;j<i;j++)
			{
				if (i%j==0)
				{
					a=1;
					break;
				}			
			}
		}
		if (a==0)
		{
			k=i;
			while(k>0)
			{
				num=num*10+k%10;
				k=k/10;
			}			
			if (i==num)
			{
			    group[b]=i;	
				b++;
			}
		}
		a=0;
	}
	if (group[0]!=0)
	{
		my_printf("%d",group[0]);
        for (i=1;i<j,group[i]!=0;i++)
		{			
			my_printf(",%d",group[i]);
			
		}
	}
	else my_printf("no");
	return 0;
}
		