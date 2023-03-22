#define NUM_ITER 1

#include <header.h>

int func(int M,int N)
{
	int ans;
	if(N==1)
        ans=1;
	else if(M>N) 
	    ans=func(M,N-1)+func(M-N,N);
	else if(M==N)
	    ans=func(M,N-1)+1;
	else
		ans=func(M,N-1);
	return ans;
}
int main_bench()
{
	int m,n,t,i,k[20];
	
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		my_scanf("%d %d",&m,&n);
		k[i]=func(m,n);
	}
	
	for(i=0;i<t;i++)
		my_printf("%d\n",k[i]);
	return 0;
}

