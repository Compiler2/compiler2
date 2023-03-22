#include <header.h>

int main_bench()
{
	int k,m,n,i,s,a[100][100],j,l,p;
	my_scanf("%d",&k);
	for(p=0;p<k;p++)
	{
		s=0;
		my_scanf("%d%d",&m,&n);
		for(j=0;j<m;j++)
			for(l=0;l<n;l++)
				my_scanf("%d",&a[j][l]);
		if((n>1)&&(m>1))
		{
			for(i=0;i<n;i++)
			{
				s+=a[0][i];
				s+=a[m-1][i];
			}
			for(i=1;i<m-1;i++)
			{
				s+=a[i][0];
				s+=a[i][n-1];
			}
		}	
		else
			if(n==1)
		{
			for(i=0;i<m;i++)
				s+=a[i][0];
		}
		else
			if(m==1)
			{
				for(i=0;i<n;i++)
				s+=a[0][i];
			}
		my_printf("%d\n",s);
	}
	return 0;
}

