#define NUM_ITER 1097347

#include <header.h>

int main_bench()
{
	int n, i, x[5]={3,5,7,1000,1000};
	my_scanf("%d",&n);
	for(i=0; i<3; i++)
	{
		if(n%x[i]==0&&n%x[i+1]!=0&&n%x[i+2]!=0)
			my_printf("%d" ,x[i]);
		else if(n%x[i]==0&&(n%x[i+1]==0||n%x[i+2]==0))
			my_printf("%d ", x[i]);
	}
	if(n%3!=0&&n%5!=0&&n%7!=0)
		my_printf("n");
	return 0;
}
