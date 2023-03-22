#include <header.h>

	int main_bench()
	{
		int n,i,t,shan,p,s;
		
		my_scanf("%d",&n);
		s=n;
		int sz[100000];
		for(i=0;i<n;i++)
		{
			my_scanf("%d",&sz[i]);
		}
		my_scanf("%d",&shan);	
			 for(i=0;i<s;i++)
			{  
				if(sz[i]==shan)
				{
					t=sz[i];
					for(p=i;p<n;p++)
					{
						sz[p]=sz[p+1];
					}
					sz[n-1]=t;
					s--;
					i--;
				}	
			}
		
	
			for(i=0;i<s-1;i++)
			{
				
				my_printf("%d ",sz[i]);
				
			}
			my_printf("%d",sz[s-1]);
	
			return 0;
	}