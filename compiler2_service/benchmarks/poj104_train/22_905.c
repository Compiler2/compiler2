#define NUM_ITER 295114

#include <header.h>

int main_bench()
{
	
	int max1=0;
	int max2=0;
	int a;
	int count=0;
	do
	{
		my_scanf("%d",&a);
		if(a>max1)
		{
			max2=max1;
			max1=a;
		}
		else if(a<max1&&a>max2)
			max2=a;
		count++;
	}
	while(getchar()!='\n');
	if(max2==0||count==1)
		my_printf("No\n");
	else
		my_printf("%d\n",max2);
	return 0;
}