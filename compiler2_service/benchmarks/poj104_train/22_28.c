#include <header.h>


void change(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}

int min(int x,int y)
{
	int z;
	if(x<y)
		z=x;
	else
		z=y;
	return(z);
}


int MAX(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
	return(z);
}

int main_bench()
{
	int num[300],i,n,max=0,max_2=0,t=0;
	char str=',';
	for(i=0;str==',';i++)
	{
		my_scanf("%d",&num[i]);
		str=getchar();
	}
	n=i;
	if(n==1)
		my_printf("No");
	else
	{
		for(i=0;i<n;i++)
			max=MAX(max,num[i]);
		for(i=0;i<n;i++)
			if(num[i]<max)
			{
				max_2=MAX(max_2,num[i]);
				t=1;
			}
		if(t==0)
			my_printf("No");
		else
			my_printf("%d",max_2);
	}
	my_printf("\n");
}