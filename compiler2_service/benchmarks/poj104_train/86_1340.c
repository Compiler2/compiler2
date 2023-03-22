#include <header.h>

int main_bench()
{
	int n,i,j,k,l,q,m=0;
	int time[10]={0};
	int t=0;
	int sum=0;
	int a[100]={0};
	my_scanf("%d",&n);
	for(q=0;q<=n-1;q++)
	{
		my_scanf("%d",&k);
		for(j=0;j<=k-1;j++)
		{
			my_scanf("%d",&a[j]);
		}
		if(k==0)
		{
			my_printf("%d\n",60);
		}
		else
		{
			for(i=0;i<=k-1;i++)
			{
				t=a[i]+3*i;
				if(t>=60)
				{
					m++;
					l=i-1;
					break;
					
				}
			}
			if(m==0) 
			{
				if((a[k-1]+3*k)<60)
				{
				sum=60-3*k;
				}
				if((a[k-1]+3*k)>=60)
				{
					sum=a[k-1];
				}
			my_printf("%d\n",sum);
			}
			else{
			if((a[l]+(l+1)*3)<=60)
			{
				sum=60-3*(l+1);
				my_printf("%d\n",sum);
			}
			if((a[l]+(l+1)*3)>60)
			{
				my_printf("%d\n",a[l]);
			}
			}
			m=0;
			t=0;
			sum=0;
			l=0;
		}
	}

	return 0;
}