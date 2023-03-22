#include <header.h>

int main_bench()
{
int k,m,n,i,j,a[100][100],l,b[100];
my_scanf("%d",&k);
for(i=0;i<k;i++)
{b[i]=0;
my_scanf("%d%d",&m,&n);
for(j=0;j<m;j++)
{
	for(l=0;l<n;l++)
	{my_scanf("%d",&a[j][l]);
	if(j==0||j==m-1)
		b[i]+=a[j][l];
	else if(l==0||l==n-1)
		b[i]+=a[j][l];
	}
}
}
for(i=0;i<k;i++)
{my_printf("%d\n",b[i]);}
}