#define NUM_ITER 231920

#include <header.h>

int pd(int n,int m)
{   if (n<=4 && n>=0 && m<=4 && m>=0) return 1;
    else return 0;
}

int main_bench()
{
	int a[5][5],b[5];
	int i,j,m,n;
	for (i=0;i<=4;i++)
	{    for (j=0;j<=4;j++)
		{	my_scanf ("%d",&a[i][j]);
		}
	}
	my_scanf ("%d %d",&n,&m);
	if (pd(n,m)==0) my_printf("error");
	if (pd(n,m)==1) 
	{   for (j=0;j<=4;j++)
	{   b[j]=a[m][j];
        a[m][j]=a[n][j];
		a[n][j]=b[j];
	}
	    for (i=0;i<=4;i++)
	{    for (j=0;j<=4;j++)
		{	my_printf ("%d",a[i][j]);
		    if (j==4) my_printf("\n");
			if (j!=4) my_printf(" ");
		}
	}
	}

	return 0;
}

