#define NUM_ITER 1022326

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i,j,m,n,t=0,r=0;
	my_scanf("%s",a);
	my_scanf("%s",b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				b[j]=0;
				a[i]=1;
				t++;
				r++;
			}
		}
	}
	
	if(t==n&&r==m)
		my_printf("YES");
	else my_printf("NO");
}