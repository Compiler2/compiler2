#define NUM_ITER 3664

#include <header.h>

int b[10000]={0};

int main_bench()
{
	int n=1,i,j,k,a[10000];
    my_scanf("%d",&a[1]);
	do
	{
		++n;
	}while(my_scanf(",%d",&a[n]));
	for(i=1;i<n;++i)
	{
		b[a[i]]++;
	}
	k=0;
	for(b[j=9999];j>=1;--j)
	{
		if(b[j]>0) k=k+1;
		if(k==2) 
		{
			my_printf("%d\n",j);
			break;
		}
	}
	if(j==0) my_printf("No\n");
	return(0);
}