#define NUM_ITER 1204634

#include <header.h>

int main_bench()
{
	int i, j=0, k, l1;
	char s1[26], s2[26];
	my_scanf("%s %s", s1, s2);
	l1=strlen(s1);
	for(i=0;s2[i];i++)
	{
		if(s1[0]==s2[i])
		{
			k=0;
			for(j=1;s1[j];j++)
			{
				if(s1[j]!=s2[j+i])
				{
					k=1;
				}
			}
			if(k==0)
			{
				my_printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}