#define NUM_ITER 226451

#include <header.h>

int main_bench()
{
	int a[5][5],m,n,(*p)[5],i;
	int f(int (*p)[5],int m,int n);
	for(p=a;p<a+5;p++)
		for(i=0;i<5;i++)
			my_scanf("%d",*p+i);
	my_scanf("%d%d",&m,&n);
	if(f(a,m,n)==0)
		my_printf("error");
	else
		for(p=a;p<a+5;p++)
		{
			for(i=0;i<4;i++)
			    my_printf("%d ",*(*p+i));
			my_printf("%d\n",*(*p+i));
		}
	return 0;
}
int f(int (*p)[5],int m,int n)
{
	int *pt,i,t;
	if(m<5&&n<5)
	{
		for(i=0;i<5;i++)
		{
			t=*(*(p+m)+i);
			*(*(p+m)+i)=*(*(p+n)+i);
			*(*(p+n)+i)=t;
		}
		return 1;
	}
	else
		return 0;
}
	

		
	

	
		
