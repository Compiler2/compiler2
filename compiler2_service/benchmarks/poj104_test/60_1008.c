#define NUM_ITER 3391

#include <header.h>

int main_bench()
{
	int n,i,sum=0;
	int f (int i);
	my_scanf("%d",&n);
	for (i=1;(i+2)<=n;i++)
	{
		if (f(i)){
			my_printf("%d %d\n",i,i+2);
			sum++;
		}
	}
	if (sum==0) my_printf("empty"); 
	return 0;
}

int f (int i){
	int s (int i);
	if (s(i)&&s(i+2))
		return (i);
	else return (0);
}

int s(int n){
	int k,num=0;
	for (k=1;k<=n;k++){
		if (n%k==0) num++;
	}
	if (num==2) return (n);
	else return (0);
}

