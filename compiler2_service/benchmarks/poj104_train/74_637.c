#define NUM_ITER 1132217

#include <header.h>

int main_bench()
{
        int i,j,m,n,a[10000],sum=0,k=0,b[10000],P,r=0,t;
	my_scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		sum=0;
		P=i;
		for(j=0;;j++)
		{
			t=P%10;
			P=P/10;
			sum=sum*10+t;
			if(P==0)
                            break;
		}
		if(sum==i)
		{
			a[k]=i;
			k++;
		}
	
	}
	

	for(i=0;i<k;i++)
	{
		for(j=2;j<a[i];j++)
			if(a[i]%j==0) break;
			
			if(j==a[i])
			{
				b[r]=a[i];
				r++;	
			}
		
	}

	if(r==0)
		my_printf("no\n");
			
			for(i=0;i<r;i++)
				if(i!=(r-1))
					my_printf("%d,",b[i]);
				else my_printf("%d",b[i]);
}