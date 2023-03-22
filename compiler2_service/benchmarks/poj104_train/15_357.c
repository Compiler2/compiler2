#include <header.h>

int main_bench()
{
	int a,b,c,d,n,i,j,x,y,s,m[100][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			my_scanf("%d",&m[i][j]);
    for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(m[i][j]==0 && m[i+1][j]==0 && m[i][j+1]==0)
			{
				a=i;b=j;
			}
		    if(m[i][j]==0 && m[i][j-1]==0 && m[i-1][j]==0)
			{
				c=i;d=j;
			}
		}
	x=c-a-1;y=d-b-1;
	s=x*y;
	my_printf("%d",s);
}