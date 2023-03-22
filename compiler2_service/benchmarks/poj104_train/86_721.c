#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m,j;
		my_scanf("%d",&m);
		int*sz
			=(int*)malloc(sizeof(int)*m);
		for(j=0;j<m;j++)
		{
			my_scanf("%d",&sz[j]);
		}
		int sum;
		for(j=0;j<m;j++)
		{
			sum=sz[j]+3*(j+1);
	        if((63-sum)<=3&&(63-sum)>=0)
			{my_printf("%d\n",sz[j]);
			break;}
			if(sum>63)
			{
				my_printf("%d\n",60-3*j);
				break;
			}
		}
	    if((sz[m-1]+3*m)<60)
		{my_printf("%d\n",60-3*m);}
	}
	return 0;
}
