#include <header.h>

int s(int n)
{
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)return 0;
		return 1;
}
int h(int n)
{
	int a=0,k=n;
	while(n!=0)
	{
		a=a*10+n%10;
        n=n/10;
	}
	if(a==k)return 1;
	else return 0;
}
int main_bench()
{
	int m,n,i,j[100],k=0;
	my_scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(s(i)==1&&h(i)==1)
		{j[k]=i;k++;}
	if(k==0)my_printf("no");
	else
	{for(i=0;i<k-1;i++)
         my_printf("%d,",j[i]);
	   my_printf("%d",j[k-1]);}

}
