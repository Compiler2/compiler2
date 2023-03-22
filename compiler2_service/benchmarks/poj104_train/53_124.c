#define NUM_ITER 12346

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int num=0,i;
	int*p=(int*)calloc(n,sizeof(int));
	int j=0;
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",p+j);
		int k,l=0;
		for(k=0;k<=j-1;k++)
		{
			if(*(p+j)==*(p+k)) l++;
		}
		if(l==0) j++;
	}
	for(i=1;i<j;i++)
	my_printf("%d,",*(p+i-1));
	my_printf("%d\n",*(p+i-1));
}
		
