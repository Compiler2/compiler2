#define NUM_ITER 14132

#include <header.h>





int yuesefu(int key,int n);
int main_bench()
{
	int monkeys[300];
	int tmp[300];
	for(int i=0;i<300;i++)
		tmp[i]=monkeys[i]=i;
	int key,num;
	int i=0;
	while(1)
	{
	my_scanf("%d %d",&num,&key);
	if(key==0)
		break;
    int final=yuesefu(key,num);	
	if(i++)
	    my_printf("\n");
	my_printf("%d",final);

	}
	return 0;
}

int yuesefu(int m,int n)
{
	int leave=1;
	for (int i=2;i<=n;i++)
	{
		int j=((m-1)%i+leave-1)%(i-1)+1;
		if (j>=(m-1) % i+1)
          leave=j+1 ;
		else 
		leave=j;
	}
	return leave;

}
