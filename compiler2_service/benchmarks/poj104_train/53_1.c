#define NUM_ITER 7295

#include <header.h>


main_bench()
{
	int m,n,i,j;
	int num[300],mark[300];
	my_scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		my_scanf("%d",&m);
		num[i]=m;
		mark[i]=0;
		j=i-1;
		while((j>=0)&&(num[j]!=num[i]))
			j--;
		if(num[j]==num[i])
			mark[i]=1;
	}
	my_printf("%d",num[0]);
	for(i=1;i<n;++i)
		if(mark[i]==0)
			my_printf(",%d",num[i]);

}
