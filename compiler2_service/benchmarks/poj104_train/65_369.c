#include <header.h>






int main_bench()
{
	int n,N;
	int a=0,b=0;
	my_scanf("%d",&N);
	for(n=1;n<=N;n++)
	{
		int A,B;
		my_scanf("%d%d",&A,&B);
		if((A==0&&B==1)||(A==1&&B==2)||(A==2&&B==0))a=a+1;
		else
		{
			if((B==0&&A==1)||(B==1&&A==2)||(B==2&&A==0))b=b+1;
			else ;
		}
	}
	if(a>b)my_printf("A\n");
	else
	{
		if(b>a)my_printf("B\n");
		else my_printf("Tie\n");
	}
	return 0;
}

