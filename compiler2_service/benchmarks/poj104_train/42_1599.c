#define NUM_ITER 51330

#include <header.h>

int main_bench(){
	int n,m,i,j,k;
	int p[100001];
    my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&p[i]);
	my_scanf("%d",&m);
	for(j=0;j<n;j++)
	{
		if(p[j]!=m)
		{
			my_printf("%d",p[j]);
			break;
		}
	}
	for(k=(j+1);k<n;k++)
	{
		if(p[k]!=m)
			my_printf(" %d",p[k]);
	}

	return 0;
}