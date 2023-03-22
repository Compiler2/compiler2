#define NUM_ITER 2690

#include <header.h>


void input(int *M,int *N,int a[],int b[])             
{
	my_scanf("%d %d",M,N);                     
	int i;
	for(i=0;i<*M;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<*N;i++)
		my_scanf("%d",&b[i]); 
	
	return;                           
} 
 
void sort(int array[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(array[j]<array[k])
				k=j;
		t=array[k];
		array[k]=array[i];
		array[i]=t;
	}
		
}

void merge(int M,int N,int a[],int b[],int c[])
{
	int i;
	for(i=0;i<M;i++)
		c[i]=a[i];
	for(i=0;i<N;i++)
		c[i+M]=b[i];
}

void output(int M,int N,int c[])
{
	int i;
	for(i=0;i<M+N-1;i++)
		my_printf("%d ",c[i]);
	my_printf("%d",c[M+N-1]);
}

int main_bench()
{
	int M,N,a[100000],b[100000];                	
	input(&M,&N,a,b);                            
	sort(a,M);
	sort(b,N);
	
	int c[100000];
	merge(M,N,a,b,c);
	output(M,N,c);
	
	return 0;
} 