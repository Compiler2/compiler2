#define NUM_ITER 22120

#include <header.h>


int su(int x);

int main_bench(){
	int m,n,i;
	my_scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		if(su(i)==1&&su(m-i)==1)
			my_printf("%d %d\n",i,m-i);
	}
	return 0;
}

int su(int x){
	int j;
	for(j=2;j<=x/2;j++)
	{
		if(x%j==0)
			return 0;
	}
	return 1;
}