#define NUM_ITER 1484082

#include <header.h>

int main_bench()
{
	int m,n,i,p,flag,a,exist,w,b;
	my_scanf("%d %d",&m,&n);
	exist=0;
	for(i=m;i<=n;i++)
	{
		a=0;
		flag=1;
		for(p=2;p<=i/2;p++)
		{
			if(i%p==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			continue;
		w=i;
		while(w>0)
		{
			b=w%10;
			a=a*10+b;
			w=w/10;
		}
		if(a==i)
		{
			my_printf((exist==1)?",%d":"%d",i);
			exist=1;
		}
	}
	if(exist==0)
		my_printf("no");
}

