#include <header.h>

int main_bench()
{   
	int n,i,j,k,m,z,x=0;
	my_scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(j==i) 
			{
				m=i;
	            if(m+2>n) break;
		        for(z=2;z<=m+2;z++)
				{
					if(z==m+2) 
					{
						k=m+2;
                        my_printf("%d %d\n",m,k);
						x=1;
					}
			        else
					{
						if((m+2)%z==0) break;
					}
				}
			}
			else 
			{
				if(i%j==0) break;
			}
		}
	}
	if (x==0) my_printf("empty");
return 0;
}
