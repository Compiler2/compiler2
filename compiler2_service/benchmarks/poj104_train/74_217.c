#define NUM_ITER 194289

#include <header.h>

int main_bench()
{
    int m,n,i,j,p,q,r[100],s=0;
	my_scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
	    p=1;
		for(j=2;j<i;j++)
		{
		    if (i%j==0)
			p=0;
		}
		for(j=0,q=i;q!=0;j++)
		{
		    r[j]=q%10;
			q=q/10;
		}
		q=j-1;
		for(j=0;j<=q;j++)
		{
		    if(r[j]!=r[q-j])
			p=0;
		}
		if(p==1)
		{
		    s++;
			if(s!=1)
			my_printf(",");
			my_printf("%d",i);
		}
	}
	if(s==0)
	my_printf("no");
}
			   
		   
		    
	
	    