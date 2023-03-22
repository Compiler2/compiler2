#define NUM_ITER 229277

#include <header.h>

int work(int arr[5][5],int m,int n)
{
	int k,t;
	if ((m>=0)&&(m<5)&&(n>=0)&&(n<5))
	{
		for (k=0;k<5;k++)
		{
			t=arr[m][k];
			arr[m][k]=arr[n][k];
			arr[n][k]=t;
		}
		return 1;
	}   
   else
	   return 0;
}

int main_bench()
{
	int i,j,m,n;
	int a[5][5];
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
    my_scanf("%d %d",&m,&n);
	if (work(a,m,n)==1)
	{
		for (i=0;i<5;i++)
        {
			my_printf("%d",a[i][0]);
			for (j=1;j<5;j++) my_printf(" %d",a[i][j]);
			my_printf("\n");
		}
	}
	else
		my_printf("error\n");
	return 0;
}