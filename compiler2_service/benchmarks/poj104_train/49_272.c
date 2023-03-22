#include <header.h>


int main_bench()
{
	char a[510]={0};
	int i, j, k, num, count;
	for(i=0;i<510;i++)
	{
		my_scanf("%c", &a[i]);
		if(a[i]=='\n')
		{
			a[i]=0;
		    num=i;
		    break;
		}
	}
	for(i=2;i<=num;i++)
	{
		for(j=0;j<=num-i;j++)
		{
			count=0;
			for(k=0;k<i;k++)
			{
				if(a[j+k]==a[j+i-k-1]) count+=1;
			}
			if(count==i)
			{
				for(k=j;k<j+i;k++)
				{
					my_printf("%c", a[k]);
				}
				my_printf("\n");
			}
		}
	}
	return 0;
}