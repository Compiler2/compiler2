#define NUM_ITER 203408

#include <header.h>

int main_bench()
{
	int map[5][5],max[5],t,i,j,t_max;
	char b=1;
	for(i=0;i<5;i++)
	{
		t_max=0;
		for(j=0;j<5;j++)
		{
			my_scanf("%d ",&t);
			map[i][j]=t;
			if(t_max<t)
			{
				max[i]=j;
				t_max=t;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(map[j][max[i]]<map[i][max[i]])
				break;
		}
		if(j==5)
		{
			my_printf("%d %d %d\n",i+1,max[i]+1,map[i][max[i]]);
			b=0;
		}
	}
	if(b)
		my_printf("not found\n");
	return 0;
}