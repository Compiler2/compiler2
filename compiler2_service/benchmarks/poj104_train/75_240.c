#include <header.h>




int main_bench()
{
	int list1[1000];
	int list2[1000];
	my_scanf("%d",&list1[0]);
	int count=1;
	while(my_scanf(",%d",&list1[count++])!=0);
	count--;
	int index=1;
	my_scanf("%d",&list2[0]);
	while(my_scanf(",%d",&list2[index++])!=0);

	int max=0;
	int num=0;
	int i=0;
	for(i=0;i<1000;i++)
	{
		num=0;
		for(index=0;index<count;index++)
		{
			if(i>=list1[index] && i<list2[index])
				num++;
		}
		if(num>max)
			max=num;
	}

	my_printf("%d %d",count,max);
	return 0;
}