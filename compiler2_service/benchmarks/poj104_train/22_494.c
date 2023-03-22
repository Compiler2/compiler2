#define NUM_ITER 109523

#include <header.h>

int main_bench()
{
	int second(int b[],int t);
	int i=0,j,z=1,a[300];
	char c;
    do
	{
		my_scanf("%d",&a[i]);
		i++;
		my_scanf("%c",&c);
	}
	while(c!='\n');
	for(j=0;j<i-1;j++)
	{
		if(a[j]!=a[j+1])
		{
			z=0;
			break;
		}
	}
	if(i==1||z==1)my_printf("No\n");
	else my_printf("%d\n",second(a,i));
}
int second(int b[],int t)
{
	int i,j,s;
	for(j=t;j>1;j--)
	{
		for(i=1;i<=j-1;i++)
	{
		if(b[i-1]>b[i])
		{
			s=b[i-1];
			b[i-1]=b[i];
			b[i]=s;
		}
	}
	}
	for(i=t-1;i>1;i--)
	{
		if(b[i-1]!=b[i])break;
	}
	return(b[i-1]);
}