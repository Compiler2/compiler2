#define NUM_ITER 1669271

#include <header.h>

int main_bench()
{
	int A[300];
	char c;
	int i=0,temp,j,k;
	int flag=0;
	do
	{
		my_scanf("%d%c",&A[i],&c);
		i++;
	}while(c==',');
	for(j=1;j<i;j++)
	{
		for(k=0;k<i-j;k++)
		{
			if(A[k]<A[k+1])
			{
				temp=A[k+1];
				A[k+1]=A[k];
				A[k]=temp;
			}
		}
	}
	for(j=0;j<i;j++)
	{
		if(A[j]<A[0])
		{
			my_printf("%d",A[j]);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		my_printf("No");
	}
	return 0;
}