#include <header.h>

int main_bench()
{
	int m,n,i,j,s,k,l,t;
	int a[100][100];
	my_scanf("%d%d",&m,&n);
	s=t=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++) 
		{
			my_scanf("%d",&a[i][j]);
			s=s+1;
		}
	}
	l=m/2;
	if(n<m) l=n/2;
	for(k=0;k<l;k++)
	{
		for(j=k;j<n-k-1;j++) {my_printf("%d\n",a[k][j]);t=t+1;}
		for(i=k;i<m-k-1;i++) {my_printf("%d\n",a[i][n-k-1]);t=t+1;}
		for(j=n-k-1;j>k;j--) {my_printf("%d\n",a[m-k-1][j]);t=t+1;}
		for(i=m-k-1;i>k;i--) {my_printf("%d\n",a[i][k]);t=t+1;}
	}
	if(t!=s)
	{
		if(m>n){ for(i=k;i<m-k;i++) my_printf("%d\n",a[i][l]);}
		if(m<n){ for(j=k;j<n-k;j++) my_printf("%d\n",a[l][j]);}
		if(m==n) my_printf("%d\n",a[l][l]);
	}
	return 0;
}
