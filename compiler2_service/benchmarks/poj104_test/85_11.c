#define NUM_ITER 14213

#include <header.h>

int main_bench()
{
	char s[100][20];
	int n, i, j;
	my_scanf("%d", &n);
	for(i=0; i<100; i++)
	{
		for(j=0; j<20; j++)
			s[i][j]=0;
	}
	for(i=0; i<n; i++)
		my_scanf("%s", s[i]);
	for(i=0; i<n; i++)
	{
		char *p=s[i];
		for(;*p!=0; p++)
		{
			if(s[i][0]>=48 && s[i][0]<=57)
				break;
			if(!((*p>=48 && *p<=57) || (*p>=65 && *p<=90) || (*p>=97 && *p<=122) || *p=='_'))
				break;
		}
		if(*p!=0)
			my_printf("no\n");
		else if(*p==0)
			my_printf("yes\n");
	}
	return 0;
}