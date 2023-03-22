#define NUM_ITER 937015

#include <header.h>

void judge_huiwen(int n,int t[])
{
	if(n/10==0)
		t[0]=10*t[0]+n;
	else if(n/10!=0)
	{
		t[0]=n%10+10*t[0];
		n=n/10;
		judge_huiwen(n,t);
	}
}

void judge_sushu(int n,int t[])
{
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
		{
			t[1]=1;
			break;
		}
}

int main_bench()
{
	int m,n,i,t[2]={0},x=0;
	my_scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		judge_huiwen(i,t);
		judge_sushu(i,t);
		if((t[0]==i)&&(t[1]==0))
		{
			my_printf("%d",i);
			x=1;
			break;
		}
		t[0]=0;
		t[1]=0;
	}
	for(i=i+1;i<=n;i++)
	{
		judge_huiwen(i,t);
		judge_sushu(i,t);
		if(t[0]==i&&t[1]==0)
			my_printf(",%d",i);
		t[0]=0;
		t[1]=0;
	}
	if(x==0)
		my_printf("no");
	my_printf("\n");
}