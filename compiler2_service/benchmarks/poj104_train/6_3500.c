#include <header.h>

int main_bench()
{
	int p,m,n,i,j,k,a[100][100],sum;
	my_scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		my_scanf("%d %d",&m,&n);
		sum=0;
		for(j=1;j<=m;j++)
			for(k=1;k<=n;k++)
				my_scanf("%d",&a[j][k]);
	   if(m==1 && n==1)
	   {
			my_printf("%d\n",a[1][1]);
			break;
	   }
		for(k=1;k<=n;k++)
			sum+=a[1][k]+a[m][k];
		for(j=1;j<=m;j++)
			sum+=a[j][1]+a[j][n];
		sum-=a[1][1]+a[1][n]+a[m][1]+a[m][n];
		my_printf("%d\n",sum);
	}
	return 0;
}
