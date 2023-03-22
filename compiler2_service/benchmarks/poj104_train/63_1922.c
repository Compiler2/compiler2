#include <header.h>

int main_bench()
{
	int m,n,q;
	int i,j,k;
	my_scanf("%d %d\n", &m,&q); 
	int A[100][100]={0};
	for (i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		my_scanf("%d",&A[i][j]);
	} 
    my_scanf("%d %d\n",&q,&n);
	int B[100][100]={0};
	for (i=0;i<q;i++)
	{
		for(j=0;j<n;j++)
		my_scanf("%d",&B[i][j]);
	}
	int C[100][100]={0};
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		for(k=0;k<q;k++)
		{
			C[i][j]=C[i][j]+A[i][k]*B[k][j];
		}
	} 	
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(j!=n-1) my_printf("%d ",C[i][j]);
		else my_printf("%d",C[i][j]);
	    }
	  	my_printf("\n"); 
	}
} 