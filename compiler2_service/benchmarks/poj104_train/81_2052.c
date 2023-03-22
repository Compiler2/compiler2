#define NUM_ITER 233094

#include <header.h>

int survival(int a[6][6],int n,int m)
{
	if(n<0||n>4||m<0||m>4) return 0;
	else
	{
		int temp,i;
		for(i=0;i<=4;i++)
		{
			temp=*(a[n]+i);
			*(a[n]+i)=*(a[m]+i);
			*(a[m]+i)=temp;
		}
		return 1;
	}
}

int main_bench()
{
	int a[6][6],n,m,i,j,f;
	int survival(int a[6][6],int n,int m);
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			my_scanf("%d",a[i]+j);
	my_scanf("%d%d",&n,&m);
	f=survival(a,n,m);
	if(f==0) my_printf("error");
	else
	{
		for(i=0;i<=4;i++)
		{
			for(j=0;j<=3;j++)
				my_printf("%d ",*(a[i]+j));
			my_printf("%d\n",*(a[i]+j));
		}
	}
}
