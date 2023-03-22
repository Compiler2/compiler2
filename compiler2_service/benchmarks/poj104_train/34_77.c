#include <header.h>


int main_bench()
{
	int n=0,result=0,i=0;
	my_scanf("%d",&n);
	for(i=1;1;i++)
	{
		if(n==1)
		{
			my_printf("End\n");
			break;
		}
		if(n%2==0)
		{
			result=n/2;
			my_printf("%d/2=%d\n",n,result);
			n=result;
		}else if(n%2==1){
			result=n*3+1;
			my_printf("%d*3+1=%d\n",n,result);
			n=result;
		}

	}
	return 0;
}