#define NUM_ITER 1446

#include <header.h>


int a[200];
int b[100];
int *p1=a,*p2=b;
int m,n;
int *p2m=&m,*p2n=&n;

void funcofa(int *p1,int *p2,int *p2m,int *p2n)
{
	my_scanf("%d%d",p2m,p2n);
	int i;
	for(i=1;i<=*p2m;i++)
	{
		my_scanf("%d",p1+i-1);
	}
	for(i=1;i<=*p2n;i++)
	{
		my_scanf("%d",p2+i-1);
	}
}

void funcofb(int *p1,int *p2,int *p2m,int *p2n)
{
	int i,j;
	int temp;
	for(i=1;i<=*p2m;i++)
	{
		for(j=1;j<*p2m;j++)
		{
			if(*(p1+j-1)>*(p1+j))
			{
				temp=*(p1+j);
				*(p1+j)=*(p1+j-1);
				*(p1+j-1)=temp;
			}
			else
			{}
		}
	}
	for(i=1;i<=*p2n;i++)
	{
		for(j=1;j<*p2n;j++)
		{
			if(*(p2+j-1)>*(p2+j))
			{
				temp=*(p2+j);
				*(p2+j)=*(p2+j-1);
				*(p2+j-1)=temp;
			}
			else
			{}
		}
	}
}


void funcofc(int *p1,int *p2,int *p2m,int *p2n)
{
	int i;
	for(i=1;i<=*p2n;i++)
	{
		*(p1+(*p2m)+i-1)=*(p2+i-1);
	}
}

void funcofd(int *p1,int *p2,int *p2m,int *p2n)
{
	int i;
	my_printf("%d",*p1);
	for(i=2;i<=*p2m+*p2n;i++)
	{
		my_printf(" %d",*(p1-1+i));
	}
	my_printf("\n");
}

int main_bench()
{
	funcofa(p1,p2,p2m,p2n);
	funcofb(p1,p2,p2m,p2n);
	funcofc(p1,p2,p2m,p2n);
	funcofd(p1,p2,p2m,p2n);
}