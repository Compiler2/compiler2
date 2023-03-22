#define NUM_ITER 567

#include <header.h>

int main_bench()
{
	int i,j,k,a,b;
	int s[100][100];
	my_scanf("%d%d",&a,&b);
	for(j=0;j<a;j++)
	{
		for(i=0;i<b;i++)
		{
			my_scanf("%d",&s[j][i]);
		}
	}
	for(j=0;j<b;j++)
	{
		k=j;
		for(i=0;;i++)
		{
			if(i==a)
			{
				break;
			}
			my_printf("%d\n",s[i][k]);
			k--;
			if(k<0)
			{
				break;
			}
		}
	}
	for(j=1;j<a;j++)
	{
		k=j;
		for(i=b-1;i>=0;i--)
		{
            my_printf("%d\n",s[k][i]);
			k++;
			if(k==a)
			{break;}
		}
	}
	return 0;
}