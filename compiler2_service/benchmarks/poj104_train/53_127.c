#define NUM_ITER 8021

#include <header.h>

void fun(int *p,int n)
{
	int i,j;
	int b[400],*q=b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(*(p+i)==*(p+j))
				break;
		}
		if(j==i)
		{
			*q=*(p+i);q++;*q=-1000;q++;
		}
	}
	*(q-1)=0;q=b;
	for(;(*q)!=0;q++)
	{
		if(*q==-1000)
		my_printf(",");
		else
		my_printf("%d",*q);
	}
				



	
}
int main_bench()
{
	int a[300],*p=a;
	int n,i;
	
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",p+i);
	fun(p,n);
}
	
	

					