#define NUM_ITER 115062

#include <header.h>

void paixu(int a[300],int k)
{
	int i,j,temp,l;
	for (i=k-1;i>=0;i--)
	{
		for (j=0;j<=i;j++)
		{
			if (a[j]<a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}


int main_bench()
{
	int a[300]={0};
	int i,j,k=0,l;
	int num;
	char c;
	i=0;
	do
	{
		my_scanf("%d",&a[i]);
        i=i+1;
	     c=getchar();
	}while (c != '\n');
    
    paixu (a,i);
	if (i==1) my_printf("No");
	else 
	{
		for (j=0;j<i-1;j++)
		{
		    if (a[j]!=a[j+1]) k=1;
		}
	    if (k==0) my_printf("No");
            else 
			{ 
		        for (l=0;l<i;l++)
				{
				          if (a[l]!=a[l+1]) 
						 {
							 my_printf("%d",a[l+1]);
							 break;
						 }
				}

			}
	}


	return 0;
}