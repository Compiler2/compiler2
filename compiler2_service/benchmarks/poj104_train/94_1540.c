#include <header.h>

int main_bench(){
	
	int n,i,a[500],b[500],j=0,l,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&(a[i]));
	}
	for(i=0;i<n;i++)
	{
		if(((a[i])%2)!=0)
		{
            b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
        for(l=i;l<j;l++)
		{
            if(b[l]<=b[i])
			{
                 k=b[i];
				 b[i]=b[l];
				 b[l]=k;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		if(i!=j-1)
		{
		    my_printf("%d,",b[i]);
		}
		else
		{
			my_printf("%d\n",b[i]);
		}
	}
	




	return 0;
}