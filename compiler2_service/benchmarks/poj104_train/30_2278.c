#define NUM_ITER 134284

#include <header.h>

	int yu7wuguan(int);
	int main_bench()
	{
		int n,result=0;
		my_scanf("%d",&n);
		for(int i=0;i<=n;i++)
		{
			if(yu7wuguan(i))
			{
				result+=i*i;
			}
		}
		my_printf("%d",result);
		return 0;
	}
int yu7wuguan(int num)
{
	if(num%7==0||num==17||num==27||num==37||num==47||num==57||num==67||num==70||num==71||num==72||num==73||num==74||num==75||num==76||num==77||num==78||num==79||num==87||num==97)
	{
		return 0;
	}
	return 1;
}
