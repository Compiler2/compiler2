#define NUM_ITER 1083372

#include <header.h>

int main_bench()
{
	char a[502],b[502][6],c;
	int i,j,n,imax,max,m[502],p,k;
	my_scanf("%d",&n);
	c=getchar();
	gets(a);
	p=strlen(a);
	for(i=0;i<p-n+1;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
	}
	for(i=0;i<p-n+1;i++)
	{
		m[i]=1;
		for(j=i+1;j<p-n+1;j++)
		{
			if(b[j][0]!='\0')
			{
				for(k=0;k<n;k++)
				{
					if(b[i][k]!=b[j][k])
						break;
				}
				if(k>=n)
				{
					b[j][0]='\0';
					m[i]++;
				}
			}
		}
	}
	max=m[0];
	imax=0;
	for(i=0;i<p-n+1;i++)
	{
		if(m[i]>max)
			max=m[i];
	}
	if(max<=1)
		my_printf("NO");
	else
	{
		for(i=0;i<p-n+1;i++)
		{
			if(m[i]>=max)
			{
				imax++;
			}
		}
	
	my_printf("%d\n",max);
	for(i=0;i<p-n+1;i++)
	{
		if(m[i]>=max)
		{
			for(j=0;j<n;j++)
				my_printf("%c",b[i][j]);
			my_printf("\n");
		}
	}
	}
	return 0;
}