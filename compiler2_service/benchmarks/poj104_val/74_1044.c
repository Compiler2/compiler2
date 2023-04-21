#define NUM_ITER 190199

#include <header.h>

int h(int i)
{
	int n,k=0,j;
	j=i;
    while(i>0)
	{
		n=i%10;
		k=k*10+n;
		i=i/10;
	}
	if(k==j)
		return(1);
	else
	return(0);
}
int s(int i)
{
	int j,k=0;
	if(i==1)
		return(0);
	else
	{
	    for(j=1;j<i;j++)
		{
		    if(i%j==0)
            k++;
        }
		if(k==1)
			return(1);
		else
			return(0);
	}
}
int main_bench()
{
	int m,n,i,j=0,x,a[100000];
	my_scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		x=h(i);
		x=x+s(i);
		if(x==2)
		{
			a[j]=i;
			j++;
		}
	}
	if(j==0)
	my_printf("no");
	else if(j==1)
		my_printf("%d",a[0]);
	else
	{
	for(i=0;i<j-1;i++)
	my_printf("%d,",a[i]);
	my_printf("%d",a[j-1]);
	}
}



