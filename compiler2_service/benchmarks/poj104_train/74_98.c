#define NUM_ITER 1021581

#include <header.h>


void judge_huiwen(int n,int t[],int y,int x)
{
	if(n/10==0)
	{
		x=x*10+n;
		t[0]=x;
	}
	else
	{
		x=x*10+n%10;
		n=n/10;
		judge_huiwen(n,t,y,x);
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
	int m,n,i,t[2]={0},y,temp=0;
	my_scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		y=i;
		judge_huiwen(i,t,y,0);
		judge_sushu(i,t);
		if(t[0]==i&&t[1]==0)
		{
			my_printf("%d",i);
			temp=1;
			break;
		}
		t[0]=0;
		t[1]=0;
	}
	for(i=i+1;i<=n;i++)
	{
		y=i;
		judge_huiwen(i,t,y,0);
		judge_sushu(i,t);
		if(t[0]==i&&t[1]==0)
			my_printf(",%d",i);
		t[0]=0;
		t[1]=0;
	}
	if(temp==0)
		my_printf("no");
	my_printf("\n");
}