#define NUM_ITER 554

#include <header.h>

int main_bench()
{
	int n,i=0;
	int a=0;
	my_scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*(n*n));
	int k;

	for(k=0;k<(n*n);k++)
	{
		my_scanf("%d",&(sz[k]));
		if(sz[k]==0){
			i++;
		}
	}
	int cond=0;
	for(k=0;k<(n*n);k++)
	{
		if(sz[k]==0&&cond==0){
			a++;
			if(sz[k+1]==255){
				cond=1;
			}
			else{continue;}
		}
	}	
	int j;
	j=(i-(a)*2)/2+2;
	int s;
	s=(j-2)*(a-2);
	my_printf("%d\n",s);
	free(sz);
	return 0;
}