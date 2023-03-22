#include <header.h>

int main_bench()
{
	int n,a=0,b=0;
	my_scanf("%d",&n);
	int num[n][2];
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&num[i][0]);
		my_scanf("%d",&num[i][1]);
	}
	for(int i=0;i<n;i++)
	{
		if(num[i][1]-num[i][0]==1||num[i][0]-num[i][1]==2)
		{
			a++;
		}
		if(num[i][0]-num[i][1]==1||num[i][1]-num[i][0]==2)
		{
			b++;
		}
	}
	if(a>b)
	{my_printf("A");}
	if(a==b)
	{my_printf("Tie");}
	if(b>a)
	{my_printf("B");}
	return 0;
}                                                                                                                                                      



