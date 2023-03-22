#define NUM_ITER 1019589

#include <header.h>

int main_bench()
{
	char a[1000],b[1000];
	int i,j,m,n;my_scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	if(m!=n) my_printf("NO");
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j])
				{
					b[j]=0;
					break;
				}
			}
			if(j==n)
			{my_printf("NO");
			break;}
		}
		if(i==strlen(a))
			my_printf("YES");
	}
	
	return 0;
}
