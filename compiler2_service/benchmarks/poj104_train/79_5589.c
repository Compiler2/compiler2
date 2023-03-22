#include <header.h>

void shu(int a,int b)
{
	int monkey[300];
	int i,j,count;
	for(i=0;i<a;i++)
		monkey[i]=1;
	i=-1;
	for(j=1;j<a;j++)
	{
		count=0;
        do
		{
			i=(i+1)%a;
			count=count+monkey[i];
		}while(count<b);
		monkey[i]=0;
	}
    for(j=0;j<a;j++)
	{
		if(monkey[j]!=0)  {my_printf("%d\n",j+1);break;}
	}
}
int main_bench()
{
	int n,m;
	while(1)
	{
		my_scanf("%d %d",&n,&m);
		if(n>0)
			shu(n,m);
		else break;
	}
}


