#define NUM_ITER 1211871

#include <header.h>

int main_bench()
{
	int huiwen(int x);
	int sushu(int x);
    int i,m,n,k=0,j;
	my_scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(huiwen(i)==1&&sushu(i)==1)
		{k++;}
	}
	if(k==0) my_printf("no\n");
	else if(k!=1)
	{
		j=0;
		for(i=m;j!=k-1;i++)
		{
		if(huiwen(i)==1&&sushu(i)==1)
		{j++; my_printf("%d,",i);}
		}
		for(;i<=n;i++)
		{
        if(huiwen(i)==1&&sushu(i)==1)
		{my_printf("%d\n",i);break;}
		}
	}
	else 
	{
        for(i=m;i<=n;i++)
		{
        if(huiwen(i)==1&&sushu(i)==1)
		{my_printf("%d\n",i);break;}
		}
	}

}

int huiwen(int x)
{
	int t=0;
	int y=x;
	while(y!=0)
	{
		t=t*10+y%10;
		y=y/10;
	}
	if(t==x) return(1);
	else return(0);
}

int sushu(int x)
{
	int i,j;
	if(x==1) return(0);
	else if(x==2) return(1);
	else
	{
	for(i=2;i<=x;i++)
	{
		if(x%i==0) {j=i;break;}
	}
	if(j==x) return(1);
	else return(0);
    }
}