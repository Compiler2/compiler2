#include <header.h>

void bubblesort(int A[],int n)
{
    int i,j,t;
	for(i=0;i<n;i++)
	{
	   for(j=n;j>i;j--)
	   {
	      if(A[j]<A[j-1])
		  {
			  t=A[j];
			  A[j]=A[j-1];
			  A[j-1]=t;
		  }
	   }
	}
}
int  main_bench()
{  
	int n,i; 
	int A[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    my_scanf("\n%d",&A[i]);
	}
	bubblesort(A,n);
	my_printf("%d\n%d\n", A[n],A[n-1]);
     return 0;
 }