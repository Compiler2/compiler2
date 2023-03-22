#include <header.h>

main_bench()
{
    int s[1000][1000],i,j,a,b,c,d,n,sum=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
       {
		my_scanf("%d",&s[i][j]);
	  }
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	    if(s[i][j]==0) {a=i;b=j;goto A;}
	}
	A:for(i=n-1;i>=0;i--)
	for(j=n-1;j>=0;j--)
	   if(s[i][j]==0) {c=i;d=j;goto B;}
	B:sum=(c-a-1)*(d-b-1);
	my_printf("%d\n",sum);
}