#include <header.h>


int main_bench()
{
	int n,i,j;
	int m,*p;
	int sum=60;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=60;
		my_scanf("%d",&m);
		if(m>0)
		{
			p=(int*)malloc(sizeof(int)*m);
			for(j=0;j<m;j++)
			{
				p[j]=0;
				my_scanf("%d",&p[j]);
				if(p[j]+3*j<58)
					sum-=3;
				if(p[j]+3*j == 58|| p[j]+3*j == 59|| p[j]+3*j == 60)
					sum = p[j];	
			}
			my_printf("%d\n",sum);
			free(p);
		}
		else
			my_printf("%d\n",sum);
	}
	return 0;
}
