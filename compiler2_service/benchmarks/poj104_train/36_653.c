#define NUM_ITER 1072243

#include <header.h>

int main_bench()
{
	char a[20], b[20];
	int a_, b_, isbreak=0, i, j;
	my_scanf("%s%s", a, b);
	a_ = strlen(a);
	b_ = strlen(b);
	if(a_!=b_)
		my_printf("NO\n");
	else
	{
	for(i=0; i<a_; i++)
	{
		for(j=0; j<b_; j++)
		{
			if(b[i]==a[j])
			{
				a[j]='0';
				break;
			}
			if(j==b_-1)
			{
				isbreak=1;
				break;
			}
		}
		if(isbreak==1)
			break;
	}
	if(isbreak==1)
		my_printf("NO\n");
	else
		my_printf("YES\n");
	}
	return 0;
}

