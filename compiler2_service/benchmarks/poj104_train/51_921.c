#define NUM_ITER 882029

#include <header.h>

int main_bench()
{
	int i,j,k=0,m,n,sum[500]={0};
	char b[600],a[510][5],c[5];
	my_scanf("%d",&n);
	getchar();
	gets(b);
	m=strlen(b);
	for(i=0;i<=m-n;i++)
	{
		for(j=i;j<i+n;j++)
		{
			a[k][j-i]=b[j];
		}
		a[k][j]='\0';
		k+=1;
	}
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			for(m=0;m<n;m++)
			{
				if(a[i][m]!=a[j][m])
				{
					m=0;
					break;
				}
			}
			if(m!=0)
			{
				sum[i]+=1;
			}
		}
	}
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(sum[j]<sum[j+1])
			{
				m=sum[j+1];
				sum[j+1]=sum[j];
				sum[j]=m;
				strcpy(c,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],c);
			}
		}
	}
	if(sum[0]!=1)
	{
		my_printf("%d\n",sum[0]);
		for(i=0;i<k;i++)
		{
			if(sum[i]<sum[0])
			{
				break;
			}
			else
			{
				my_printf("%s\n",a[i]);
			}
		}
	}
	else
	{
		my_printf("NO");
	}
	return 0;
}