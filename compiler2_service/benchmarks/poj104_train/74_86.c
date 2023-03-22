#include <header.h>

int main_bench()
{
	int m,n,i=0,j=0,k=0,x=0,y=0,l=0,sushu[100000],a[10],aaa,bbb;
	for(i=0;i<100000;i++) sushu[i]=0;
	my_scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0) break;
		}
		if(j==i/2+1) 
		{
			sushu[i]=1;
		j=0;
		x=i;
		l=0;
		for(k=0;k<10;k++)
			a[k]=0;
		while(x)
		{
			a[l++]=x%10;
			x=x/10;
		}
		for(k=0;k<l;k++)
		{
			if(a[k]!=a[l-k-1]) break;
		}
		if(k<l&&sushu[i]==1) sushu[i]=0;
		}	
	  }


	for(i=m;i<=n;i++)
	{
		if(sushu[i]==1) break;
	}
	if(i==n+1) my_printf("no\n");
	else
	{
		
		
		
		my_printf("%d",i++);
		for(;i<=n;i++)
		{
			if(sushu[i]==1) my_printf(",%d",i);
		}
	
	my_printf("\n");
	}
}
