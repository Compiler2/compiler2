#include <header.h>

int main_bench()
{
	int bill,pay[6],unit[6]={100,50,20,10,5,1},i,j;
	my_scanf("%d",&bill);
    for(i=1;i<=6;i++)
	{
		pay[i-1]=bill/unit[i-1];
		bill-=pay[i-1]*unit[i-1];
	}
	for(j=1;j<=6;j++)
		my_printf("%d\n",pay[j-1]);
	return 0;
}