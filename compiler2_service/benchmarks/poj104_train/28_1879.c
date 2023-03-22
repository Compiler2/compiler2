#define NUM_ITER 1208455

#include <header.h>

int main_bench()
{
	char a[5000];
	int i,num[300]={0},b=0;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=' ')
		{
			num[b]++;
		}
		else
		{
			b++;
		}


	}
	for(i=0;i<=b;i++)
	{
		if(num[i]!=0)
		{
			my_printf("%d",num[i]);
			if(i!=b)
			my_printf(",");
		}
	}

return 0;
}
