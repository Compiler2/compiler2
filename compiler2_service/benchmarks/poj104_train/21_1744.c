#define NUM_ITER 33560

#include <header.h>

void bubble(int *p,int n)
{
	int i=0,pass,temp;

	for(pass=1;pass<=n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(*(p)>*(p+1))
			{
				temp=*(p);
				*(p)=*(p+1);
				*(p+1)=temp;
			}
		}
	}
	return;
}
float ffabs(float x)
{
	if(x>0)
		return x;
	else
		return -x;
}
int main_bench()
{
	int n,i,*num,sum=0,*temp,r=0;
	float ave,max=0.0;

	my_scanf("%d",&n);

	num=(int *)malloc(n*sizeof(int));
	temp=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		my_scanf("%d",(num+i));
		sum+=*(num+i);
	}
	
	ave=(float)sum/(float)n;

	for(i=0;i<n;i++)
	{
		if(ffabs((float)*(num+i)-ave)>=max)
			max=ffabs((float)*(num+i)-ave);
	}

	for(i=0;i<n;i++)
	{
		if(ffabs(ffabs((float)*(num+i)-ave)-max)<0.0000001)
		{
			*(temp+r)=*(num+i);
			r++;
		}
	}
	if(r==1)
	{
		my_printf("%d",*(temp+0));
	}
	else
	{
		bubble(temp,r);
		for(i=0;i<r;i++)
		{
			my_printf("%d%c",*(temp+i),(i!=r-1?',':'\n'));
		}
	}
}