#define NUM_ITER 858411

#include <header.h>

int main_bench()
{
	int  i, flag=0, deadend=0;
	double x;
	char a[501], b[501];
	my_scanf("%lf\n", &x);
	my_scanf("%s\n", &a);
	my_scanf("%s\n", &b);
	for(i=0;i<strlen(a);i++)
	{
		if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='G')&&(a[i]!='C'))
		{
			my_printf("error");
			deadend=1;
			break;
		}
	}
	if((strlen(a)==strlen(b))&&(deadend==0))
	{
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==b[i])
				flag++;
		}
		if((100*flag/(strlen(a)))<(100*x))
			my_printf("no");
		else
			my_printf("yes");
	}
	else if((strlen(a)!=strlen(b))&&(deadend==0))
		my_printf("error");
	return 0;
}