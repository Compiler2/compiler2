#define NUM_ITER 226973

#include <header.h>

int f(int,int);
int main_bench()
{
	int a[5][5],i,m,n;
	int *p=*a,*q=*(a+4)+4;
	for(;p<=q;)
		my_scanf("%d",p++);
	my_scanf("%d%d",&m,&n);
	if(f(m,n))
	{
		for(i=0;i<5;i++)
		{
			if(i==m)
				p=*(a+n);
			else if(i==n)
				p=*(a+m);
			else
				p=*(a+i);
			q=p+5;
			q--;
			for(;p<q;p++)
				my_printf("%d ",*p);
			my_printf("%d\n",*p);
		}
	}
	else
		my_printf("error");

}
int f(int m, int n)
{
	if(m>=0&&n>=0&&m<5&&n<5)
		return 1;
	else
		return 0;
}