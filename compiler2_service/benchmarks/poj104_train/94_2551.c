#define NUM_ITER 5173

#include <header.h>

int main_bench()
{
    int N,e;
	int sz[501];
	my_scanf("%d",&N);
	for(int i=0;i<N;i++)
		my_scanf("%d",&(sz[i]));
	for(int k=1;k<=N;k++)
	{
		for(int i=0;i<N-k;i++)
		{
			if(sz[i]>sz[i+1])
			{
				e=sz[i+1];
				sz[i+1]=sz[i];
				sz[i]=e;
			}
		}
	}
    int flag = 0;
	for(int i=0;i<N;i++)
	{
		if(sz[i]%2!=0)
        {
            if (flag == 0)
            {
		    	my_printf("%d",sz[i]);
                flag = 1;
            }
            else
                my_printf(",%d", sz[i]);
	    }
	}
	return 0;
}