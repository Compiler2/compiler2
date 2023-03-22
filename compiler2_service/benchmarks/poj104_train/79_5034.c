#define NUM_ITER 15

#include <header.h>

int main_bench()
{
	while(1)
	{
		int n,m;
		my_scanf("%d %d",&n,&m);
		if(n==0)break;
	    int a[301],p=1,i,num,ren;
        ren=n;
	    for(i=1;i<=n;i++)
		    a[i]=0;
	    while(ren)
		{
	     for(i=p,num=0;num<m;i++)
		 {
		   if(i>n)i=1;
		   if(a[i]==0)num++;
		 }
	     a[i-1]=1;
	     if(ren==1)my_printf("%d\n",i-1);
	     ren=ren-1;
	     p=i;
		}
	}
}