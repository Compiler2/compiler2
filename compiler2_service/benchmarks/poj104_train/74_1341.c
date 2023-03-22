#include <header.h>

int huiwen(int n)
{
	int k=0,a,b=n;
	while(b!=0)
	{
		a=b%10;
		k=k*10+a;
		b=b/10;
	}
	if(k==n)
		return 1;
	else
		return 0;
}
int sushu(int n)
{
	int i;
	if(n==2)
		return 1;
	else
	{
		for(i=2;i<=(n-1);i++)
		{
			if(n%i==0)
			return 0;
		}
		return 1;
	}
}
int main_bench()
{
	int m,n;
	my_scanf("%d %d",&m,&n);
	int i,k=0;
	int s[1000];
	for(i=0;i<=(n-m);i++)
	{
		if((huiwen(m+i)==1)&&(sushu(m+i)==1))
		{
			s[k]=m+i;
			k=k+1;
		}
	}
	if(k==0)
		my_printf("no");
	else
	{
		my_printf("%d",s[0]);
		for(i=1;i<k;i++)
		{
			my_printf(",%d",s[i]);
		}
	}
}