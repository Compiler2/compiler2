#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char s1[41];
	char s2[41];
	char *now;
	char *next;
	char *mid;
	int i,j;
	int nowlen;
	int thislen;
	my_scanf("%s",s1);

	now = s1;
	next = s2;
	nowlen = strlen(s1);
	for(i = 0;i < n - 1;i++)
	{
		for(j = 0;j < 41;j++)
			next[j] = '\0';
		my_scanf("%s",next);

		thislen = strlen(next);

		if(nowlen + thislen + 1 <= 80) 
		{
			my_printf("%s ",now);
			nowlen = nowlen + thislen + 1;
		}
		else
		{
			my_printf("%s\n",now);
			nowlen = thislen;
		}
		mid = now;
		now = next;
		next = mid;
	}
	my_printf("%s",now);
	return 0;
}
		
		

