#define NUM_ITER 2186638

#include <header.h>


void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}

int main_bench()
{
	int n,i,a[1000],b[1000],qa,ra,qb,rb,sum;
	while(my_scanf("%d",&n) && n!=0)
	{
		sum=0;
		for(i=0;i<n;i++)
			my_scanf("%d",&a[i]);
	
		for(i=0;i<n;i++)
			my_scanf("%d",&b[i]);
		sort(a,n);
		sort(b,n);
		ra=0;rb=0;qa=n-1;qb=n-1;
		while(ra<=qa)
		{
			if(a[qa]>b[qb]) sum+=200,qa--,qb--;
			else if(a[ra]>b[rb]) sum+=200,ra++,rb++;
			else
			{
				if(a[ra]<b[qb]) sum-=200;
				ra++,qb--;
			}
		}
		my_printf("%d\n",sum);
	}
}