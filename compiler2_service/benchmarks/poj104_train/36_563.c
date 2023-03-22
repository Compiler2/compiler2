#include <header.h>

int main_bench()
{
	int i,j,m,n,c=0;
	char a[40],b[40],k;
	my_scanf("%s%s",&a,&b);
	m=strlen(a);
	n=strlen(b);
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(a[j]>a[i])
				{
					k=a[j];a[j]=a[i];a[i]=k;
				}
				if(b[j]>b[i])
				{
					k=b[j];b[j]=b[i];b[i]=k;
				}
			}
		}
	    for(i=0;i<m;i++)
		{
			if(a[i]!=b[i])
			{	c=1;
			break;}
		}
		if(c==0)
			my_printf("YES");
		else my_printf("NO");
	}
	else my_printf("NO");
}