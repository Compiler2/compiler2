#define NUM_ITER 192908

#include <header.h>

int main_bench()
{
	int a[5][5],i,j,k,p,m,n,s=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	}
	m=a[0][0];k=0;
	for(j=0;j<5;j++)
	{
		if(a[0][j]>m)
		{
			m=a[0][j];
			k=j;
		}
		else;
	}
	n=a[0][k];p=0;
	for(i=0;i<5;i++)
	{
		if(a[i][k]<n)
		{
			n=a[i][k];
			p=i;
		}
		else;
	}
	if(p==0)
		my_printf("1 %d %d",k+1,a[0][k]);
	else
		s++;

    m=a[1][0];k=0;
	for(j=0;j<5;j++)
	{
		if(a[1][j]>m)
		{
			m=a[1][j];
			k=j;
		}
		else;
	}
	n=a[0][k];p=0;
	for(i=0;i<5;i++)
	{
		if(a[i][k]<n)
		{
			n=a[i][k];
			p=i;
		}
		else;
	}
	if(p==1)
		my_printf("2 %d %d",k+1,a[1][k]);
	else
		s++;

	m=a[2][0];k=0;
	for(j=0;j<5;j++)
	{
		if(a[2][j]>m)
		{
			m=a[2][j];
			k=j;
		}
		else;
	}
	n=a[0][k];p=0;
	for(i=0;i<5;i++)
	{
		if(a[i][k]<n)
		{
			n=a[i][k];
			p=i;
		}
		else;
	}
	if(p==2)
		my_printf("3 %d %d",k+1,a[2][k]);
	else
		s++;

	m=a[3][0];k=0;
	for(j=0;j<5;j++)
	{
		if(a[3][j]>m)
		{
			m=a[3][j];
			k=j;
		}
		else;
	}
	n=a[0][k];p=0;
	for(i=0;i<5;i++)
	{
		if(a[i][k]<n)
		{
			n=a[i][k];
			p=i;
		}
		else;
	}
	if(p==3)
		my_printf("4 %d %d",k+1,a[3][k]);
	else
		s++;

    m=a[4][0];k=0;
	for(j=0;j<5;j++)
	{
		if(a[4][j]>m)
		{
			m=a[4][j];
			k=j;
		}
		else;
	}
	n=a[0][k];p=0;
	for(i=0;i<5;i++)
	{
		if(a[i][k]<n)
		{
			n=a[i][k];
			p=i;
		}
		else;
	}
	if(p==4)
		my_printf("5 %d %d",k+1,a[4][k]);
	else
		s++;
	if(s==5)
		my_printf("not found");
	return 0;
}
