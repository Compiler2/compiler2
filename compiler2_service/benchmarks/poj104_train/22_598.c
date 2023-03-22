#include <header.h>

int main_bench()
{
	int num[300],i,j;
	int max1,max2;
	char c;
	i=0;
	do
	{
		my_scanf("%d",&num[i]);
		my_scanf("%c",&c);
		i++;
	} while (c==',');
	max1=num[0];
	max2=0;
	for (j=0;j<i;j++)
	{
		if (num[j]>max1)
		{
			max2=max1;
			max1=num[j];
			continue;
		}
		if (num[j]==max1) continue;
		if (num[j]>max2)
		{
			max2=num[j];
		}
	}
	if (max2==0) my_printf("No");
	else my_printf("%d",max2);
}