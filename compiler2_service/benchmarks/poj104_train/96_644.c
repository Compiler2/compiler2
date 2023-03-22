#define NUM_ITER 1037613

#include <header.h>

char s[1000];
int i ,len,sum,p;
int flag;
int main_bench()
{
	my_scanf("%s",s);
	len = strlen(s);
	sum = 0 ; flag = 1;
	for (i = 0; i < len ; ++i)
	{
		sum =(sum*10+s[i]-'0');
		p = sum/13;
		sum = sum%13;
		if (!p && flag) continue;
		flag = 0;
		my_printf("%d",p);
	}
	if (flag) my_printf("%d",0);
	my_printf("\n");
	my_printf("%d\n",sum);
}