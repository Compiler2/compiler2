#define NUM_ITER 1937022

#include <header.h>

int f(int *p,int n);
int main_bench()
{
	int s[300],i=0,n,a,b,*p;
	char c;
	p=&s[0];
	my_scanf("%d",&s[0]);
    while((c=getchar())==',')
	{
		i++;
		my_scanf("%d",&s[i]);
	}
	n=i+1;
	if(n==1)
		my_printf("No\n");
	else
	{
		a=f(p,n);
		b=0;
	    for(i=0;i<n;i++)
		{
			if(s[i]<a&&s[i]>=b)
				b=s[i];
		}				
		if(b!=0)
			my_printf("%d\n",b);
		else
			my_printf("No\n");
	}
}
int f(int *p,int n)
{
	int i,k;
	k=*p;
	for(i=1;i<n;i++)
	{
		if(*(p+i)>=k)
			k=*(p+i);
	}
	return(k);
}
    