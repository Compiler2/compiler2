#include <header.h>

int prime(int t)
{
	int i,k,s;
	k=0;
	for(i=2;i<t;i++)
	{
      if(t%i==0)
		  k+=1;
	}
	if(k>0)
		s=0;
	else
		s=1;
	return s;
}
int main_bench()
{
	int n,i,k,t;
    my_scanf("%d",&n);
	k=0;
	for(i=3;i<n-1;i++)
	{
		if((prime(i)==1)&&(prime(i+2)==1))
		my_printf("%d %d\n",i,i+2);
		k+=1;
	}
	if(k==0)
		my_printf("empty");
	return 0;
}

