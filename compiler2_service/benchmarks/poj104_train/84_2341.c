#include <header.h>

int main_bench()
{
	int a;
	int big1,big2,big;
	my_scanf("%d",&a);
	int b[100];
	my_scanf("%d",&b[0]);
	big1=b[0];
	my_scanf("%d",&b[1]);
	big2=b[1];
	if (big2>big1) 
	{
		big=big1;
		big1=big2;
		big2=big;
	}
	for (int i=2;i<=a-1;i++)
	{
		my_scanf("%d",&b[i]);
		if(b[i]>big2)
		{
			big2=b[i];
			if (big2>big1) 
			{
			big=big1;
			big1=big2;
			big2=big;
			}
		}
	}
	my_printf("%d\n%d\n",big1,big2);
	return 0;
}
