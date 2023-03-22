#define NUM_ITER 1399

#include <header.h>

int fun(int x,int y)
{
	int i,sum=0;
	for(i=x;i*i<=y;i++)
		if(y%i==0) {sum++;sum+=fun(i,y/i);}
    return sum;
}

int main_bench()
{
	int n,i,sum;
	my_scanf("%d",&n);
	while(n>0)
	{	n--;
		my_scanf("%d",&i);sum=1;
		sum+=fun(2,i);
		// my_printf("%d\n",sum);
	}
	return 0;
}