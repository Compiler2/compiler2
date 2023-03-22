#define NUM_ITER 226797

#include <header.h>

int main_bench()
{
	int change(int n,int m);
	void changing(int a[5][5],int n,int m);
	int n,m,i,j,flag,a[5][5];
	for(j=0;j<5;j++)
		for(i=0;i<5;i++)
			my_scanf("%d",&a[j][i]);
	my_scanf("%d%d",&n,&m);
	flag=change(n,m);
	if(flag==0) my_printf("error\n");
	else
	{
		changing(a,n,m);
		for(j=0;j<5;j++)
		{
			my_printf("%d",a[j][0]);
			for(i=1;i<5;i++)
				my_printf(" %d",a[j][i]);
			my_printf("\n");
		}
	}
}
int change(int n,int m)
{
	int f;
	if((n>=0&&n<5)&&(m>=0&&m<5)) f=1;
	else f=0;
	return(f);
}
void changing(int a[5][5],int n,int m)
{
	int i,b[5];
	for(i=0;i<5;i++)
	{
		b[i]=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=b[i];
	}
}
		

		
