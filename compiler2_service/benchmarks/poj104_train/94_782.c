#define NUM_ITER 5037

#include <header.h>


int main_bench()

{
	int n,i,j;
	int a[500]={0};
	int b[500]={0};
	void bubble(int a[],int n);
	
	my_scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}

	bubble(a,n);
	

	for(i=0,j=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
    for(i=0;i<j-1;i++)
	{
	  my_printf("%d,",b[i]);
	}
	my_printf("%d",b[j-1]);

	return 0;

}


void bubble(int a[500],int n)
{
	int i,temp,j;
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}