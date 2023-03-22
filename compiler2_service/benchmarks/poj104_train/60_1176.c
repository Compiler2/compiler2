#define NUM_ITER 16187

#include <header.h>

int main_bench(){
	int sushu[2],i,j,k=0,n,flag,fl=0;
	my_scanf("%d",&n);
	for (i=3;i<=n;i++)
		{
		flag=1;
		for (j=2;j<=i/2;j++)
			if (i%j==0)
			{
				flag=0;
				break;
			}
		if (flag)
			{
			sushu[k]=i;
			k=k+1;
			}
		if (k==2)
		{
			if (sushu[0]+2==sushu[1])
				{
				my_printf("%d %d\n",sushu[0],sushu[1]);
				fl=1;
				}
			sushu[0]=sushu[1];
			k=1;
		}

		}
	if (fl==0)
		my_printf("empty");
	return 0;
}