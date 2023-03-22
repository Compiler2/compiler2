#include <header.h>

int main_bench()
{
    int n,i,j,k,m,b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    my_scanf("%d",&m);
		if(m==0)
		{
		    my_printf("60\n");
		}
		if(m!=0)
		{
			for(j=0;j<m;j++)
			{
			    my_scanf("%d",&b[j]);
			}
			for(k=m;k>0;k--)
			{
			    if(b[k-1]+3*k<=60)
				{
				    my_printf("%d\n",60-3*k);
					break;
				}
				else if(b[k-1]+3*k==61 || b[k-1]+3*k==62 || b[k-1]+3*k==63)
				{
				    my_printf("%d\n",b[k-1]);
					break;
				}
				else if(b[k-1]+3*k>63)
				{
				    continue;
				}
			}
		}
	}
	return 0;
}