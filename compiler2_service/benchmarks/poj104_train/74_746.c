#define NUM_ITER 1605733

#include <header.h>

int A(int k)
{
	int i;
	for(i=2;i<k;i++)
	{
		if(k%i==0)
		{
			return 0;
		}		
	}
	return 1;
}
int B(int k)
{
	int s=0,t;
	t=k;
	while(k>0)
	{
		s=s*10+(k%10);
		k/=10;
	}
	if(s==t){
		return 1;
	}
	else{
		return 0;
	}
}
int main_bench()
{
	int m,n,k;
	int first=1,flag=1;
	my_scanf("%d %d",&m,&n);
	for(k=m;k<=n;k++)
	{
		if(A(k)&&B(k)){
			if(first){
			    my_printf("%d",k);
			    first=0;
			}
		         else{
				my_printf(",%d",k);
			}
			flag=0;
		}
	}
	if(flag)
	{
		my_printf("no");
	}
	return 0;	
}
