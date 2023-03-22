#define NUM_ITER 35608

#include <header.h>

int main_bench()
{
	char q[100][100]={0};
	int n,i,j;
	char c;
	for(int i1=0;i1<=99;i1++)
	{
		my_scanf("%s",q[i1]);
		c=getchar();
		if(c=='\n') {n=i1;break;}
	}
	for(i=n;i>=1;i--)
	{
		my_printf("%s ",q[i]);
	}
	my_printf("%s",q[0]);
	return 0;
}