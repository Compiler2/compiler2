#define NUM_ITER 3909

#include <header.h>

int add(int a1,int b1);
int main_bench()
{
	int q,p,n,result,i,a,k,sz[1000];
	my_scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		my_scanf("%d",&a);
		p=1;
		q=1;
	    for(i=2;i<a;i++)
		{
		  result=add(p,q);
		  p=q;
		  q=result;
		}
		if(a==2||a==1)
		{
		  sz[k]=1;
		}
		else
		{
			sz[k]=result;
		}
	}
	for(k=0;k<n;k++)
	{
	  my_printf("%d\n",sz[k]);
	}
    return 0;
}

int add(int a1,int b1){
	int s;
	s=a1+b1;
	return s;
}
