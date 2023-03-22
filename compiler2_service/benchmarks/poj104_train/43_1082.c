#define NUM_ITER 71754

#include <header.h>

int main_bench()
{
	int m,j,w,e;
	my_scanf("%d",&m);
	int judge(int a);
	for(j=2;j<=m/2;j++)
	{
		w=judge(j);
		e=judge(m-j);
		if(w==1&&e==1)
			my_printf("%d %d\n",j,m-j);
	}

	return 0;
}
int judge(int a)
{
	int i,flag=1;
	for(i=2;i*i<=a;i++)
	{
		if(a%i==0)
			{flag=0;
		break;}
	}
	return flag;
}