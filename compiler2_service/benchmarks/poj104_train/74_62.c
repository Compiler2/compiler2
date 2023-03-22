#include <header.h>

int hw(int n)
{
	int m=0,i;
	if(n/10==0)return 1;
	else 
	{
		i=n;
		do
		{
			m=m*10+n%10;
			n=n/10;
		}while(n!=0);
		if(m==i)return 1;
		else return 0;
	}
}
int ss(int n)
{
	int i;
	for(i=2;i<=n;i++)if(n%i==0)break;
	if(i==n)return 1;
	else return 0;
}
int main_bench()
{
	int m,n,i,j=0,a[100]={0};
	my_scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)if(hw(i)&&ss(i))a[j++]=i;
	if(j==0)my_printf("no");
	else{for(i=0;i<j-1;i++)my_printf("%d,",a[i]);my_printf("%d",a[i]);}
}