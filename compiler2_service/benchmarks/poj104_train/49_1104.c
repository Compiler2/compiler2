#include <header.h>

int main_bench()
{
	char a[500];
	int i,j,r=0,k,p,q,m,n;
    for(i=0;i<500;i++)
	{
		my_scanf("%c",&a[i]);
		r++;
		if(a[i]=='\n')
			break;
	}
	r=r-1;
    for(j=1;j<=r-1;j++)
		for(k=0;k<r;k++)
		{
			m=0;
			p=r;
			q=j;
			for(i=k;i<=k+j/2;i++)
			{
				if(a[i]==a[i+q])
				{
					q=q-2;
                    m++;
				}
				else
					break;
			}
			if(m==(j+1)/2)
			{
				for(n=k;n<=k+j;n++)
				     my_printf("%c",a[n]);
				my_printf("\n");
			}
		}
	return 0;
}