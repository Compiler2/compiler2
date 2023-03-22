#define NUM_ITER 2388

#include <header.h>


void duqu(int n,int m,int a[],int b[])
{
	int i;
    for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		my_scanf("%d",&b[i]);
  
}
void sort(int a[],int n,int b[],int m)
{
	int i,j,t;
   
    for(j=0;j<n-1;j++)
	{
		
		for(i=0;i<n-1-j;i++)
		if(a[i]>a[i+1])
		{
			t=a[i];a[i]=a[i+1];a[i+1]=t;
		}
	}
		 for(j=0;j<m-1;j++)
	{
		
		for(i=0;i<m-1-j;i++)
		if(b[i]>b[i+1])
		{
			t=b[i];b[i]=b[i+1];b[i+1]=t;
		}
	}
    
}
void hebing(int array1[],int array2[],int n,int m)
{ 
	int i;
	for(i=n;i<(n+m);i++)
		array1[i]=array2[i-n];

}
void xian(int array[],int n,int m)
{
	int i;
	for(i=0;i<(n+m-1);i++)
		my_printf("%d ",array[i]);
	my_printf("%d",array[n+m-1]);
}



int main_bench()
{
    void duqu(int n,int m,int a[],int b[]);
	void sort(int *p1,int n,int *p2,int m);
	void hebing(int array1[],int array2[],int n,int m);
	void xian(int array[],int n,int m);
	int n,m,a[1000],b[1000];
	my_scanf("%d %d",&n,&m);
	duqu(n,m,a,b);
	sort(a,n,b,m);
    hebing(a,b,n,m);
	xian(a,n,m);
	
}