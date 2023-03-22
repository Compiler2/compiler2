#define NUM_ITER 561

#include <header.h>

int main_bench()
{
	int s[100][100],l,h,i,j,hang,lie;
	my_scanf("%d%d",&lie,&hang);
	for(l=0;l<lie;l++)
	{
		for(h=0;h<hang;h++)
		{
			my_scanf("%d",&s[h][l]);
		}
	}
	for(i=0;i<hang+lie-1;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(j>hang-1)
			{
				j=hang-1;
			}
			h=j;
			l=i-h;
			if(l>lie-1)
			{
				break;
			}
			my_printf("%d\n",s[h][l]);
		}
	}
	return 0;
}
