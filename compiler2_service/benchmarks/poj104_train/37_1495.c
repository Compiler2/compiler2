#define NUM_ITER 26051

#include <header.h>


int main_bench()
{
	int n;
	int i,j,k,mid=0;
	my_scanf("%d",&n);
	char z[100010];
	int len=0;
	int ref=0;
	for(i=0;i<n;i++)
	{
		ref=0;
		my_scanf("%s",z);
		len=strlen(z);
		for(j=0;j<len;j++)
		{
			mid=0;
			for(k=0;k<len;k++)
			{
				if(z[j]==z[k])
				{
					mid=mid+1;
				}
			}
			if(mid==1)
			{
				my_printf("%c\n",z[j]);
				ref=1;
				break;
			}
		}
		if(ref==0)
		{
			my_printf("no\n");
		}
	}
	return 0;
}
