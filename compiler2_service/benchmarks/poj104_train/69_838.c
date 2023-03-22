#define NUM_ITER 682134

#include <header.h>

int main_bench()
{
	char s1[255], s2[255];
	int a, b, l1, l2, sum[255]={0}, l=0;
	my_scanf("%s %s", s1, s2);
	l1=strlen(s1);
	l2=strlen(s2);
	while(l1>0||l2>0)
	{
		a=(l1>0)?s1[--l1]-'0':0;
		b=(l2>0)?s2[--l2]-'0':0;
		sum[l]+=a+b;
		sum[l+1]=sum[l]/10;
		sum[l++]%=10;
	}
	while(sum[l]==0&&l>0)
	{
		l--;
	}
	for(;l>=0;l--)
	{
		my_printf("%d", sum[l]);
	}
	my_printf("\n");
	return 0;
}