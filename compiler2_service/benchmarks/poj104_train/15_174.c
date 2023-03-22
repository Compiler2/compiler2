#include <header.h>

int main_bench()
{
	int p[1000][1000];
    int a=0,b=0;
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   if(p[i][j]==0)
		   {
	    	a++;
		   }
		}
		if(a!=0) break;
	}
    for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
          if(p[i][j]==0)  b++;
		}
		if(b!=0)   break;
	}
	int sum=0;
	sum=(a-2)*(b-2);
	my_printf("%d",sum);
	return 0;
}