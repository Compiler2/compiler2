#define NUM_ITER 1021042

#include <header.h>

int main_bench()
{
	int m,n,i,j,k;
	char s[100],t[100],p[100],q[10];
	my_scanf("%s%s",s,t);
	m=strlen(s);
	n=strlen(t);
	if(m!=n)
		my_printf("NO");
	else 
	{
		for(i=0;i<n;i++)
			p[i]=1;
		for(j=0;j<m;)
		{
			for(k=0;k<n;)
			{
				if(s[j]==t[k]&&p[k]==1)
				{p[k]=0;break;}
				else k++;
			}
			if(k==n)
			{my_printf("NO");break;}
			else j++;
		}
		if(j==m)
			my_printf("YES");
	}
}
