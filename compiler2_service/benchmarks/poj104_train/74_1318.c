#define NUM_ITER 1066931

#include <header.h>

int sushu(int n)
{
	int d=1,i;
	if (n==1) d=0;
	else if(n==2) d=1;
	else 
	{
		for (i=2;i<=n-1;i++)
			if (n%i==0)
			{
				d=0;break;
			}
	}
	return (d);
}
int huiwen(int n)
{
	int m,s=0,d=0,t;
	t=n;
	while(n!=0)
	{
	m=n%10;
	n=n/10;
	s=s*10+m;
	}
	if (s==t) d=1;
	return d;
}
main_bench()
{
	int m,n,i,k,s=0;
	my_scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		int x=sushu(i);int y=huiwen(i);
		if(x==1&&y==1)
		{
			my_printf("%d",i);s++; 
			break;
		}
	}
	for (k=i+1;k<=n;k++)
	{
		int x=sushu(k);int y=huiwen(k);
		if(x==1&&y==1)
		{
			my_printf(",%d",k);		
		}
	}
	if (s==0) my_printf("no");
return 0;
}
