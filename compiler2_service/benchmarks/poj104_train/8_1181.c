#define NUM_ITER 2049

#include <header.h>

int m,n;
int c[200]={0};
int a[100]={0};
int b[100]={0};
int main_bench()
{	void A(int str[],int m);
	void B(int str3[],int str2[]);
	void D(int str[],int str2[]);
	
	int i,j,k;
	my_scanf("%d%d",&m,&n);
	
	D(a,b);
	A(a,m);
	A(b,n);
	B(a,b);
	
}
void D(int str[],int str2[])
{
int i;
for(i=0;i<m;i++)
	my_scanf("%d",&a[i]);
for(i=0;i<n;i++)
	my_scanf("%d",&b[i]);
}

void A(int str[],int m)
{
	int i,j,k;
	int temp;
	for(i=0;i<m-1;i++)
	for(j=i+1;j<m;j++)
		if(str[i]>str[j])
		{temp=str[i];str[i]=str[j];str[j]=temp;}
}
void B(int str3[],int str2[])
{	int i;
	for(i=0;i<m;i++)
		my_printf("%d ",str3[i]);
	for(i=0;i<n-1;i++)
		my_printf("%d ",str2[i]);
	my_printf("%d",str2[n-1]);
}