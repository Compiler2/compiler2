#define NUM_ITER 34550

#include <header.h>

int main_bench()
{
	int n,i,j,temp[1000] = {0};
	char cr[21];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",&cr);
		if((cr[0] >='a' &&cr[0]<='z') || (cr[0] >='A' &&cr[0]<='Z')|| cr[0] == '_')
		{
			for (j=1;j<20;j++)
			{
				if((cr[j] >= 'a' && cr[j] <= 'z') || (cr[j] >= 'A' && cr[j] <= 'Z') || (cr[j] >= '0' && cr[j] <= '9') || cr[j] == '_')
				{
					continue;
				}
				else if (cr[j] == '\0')
				{
					temp[i] = 1;
					break;
				}
				else
				{
					temp[i] = 0;
					break;
				}

			}
		}
		else
			temp[i] = 0;
	}
	for (i=0;i<n;i++)
	{
		if (temp[i] == 1)
			my_printf("yes\n");
		else
			my_printf("no\n");
	}
	return 0;
}