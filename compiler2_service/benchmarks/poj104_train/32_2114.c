#define NUM_ITER 1296

#include <header.h>

int main_bench()
{
	int n,s[200],i,j,e,l,k,d[200],h;
	char a[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(h=0;h<200;h++)
		{
			a[h]=s[h]=d[h]=0;
		}
		my_scanf("%s",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			s[j]=a[l-j-1]-'0';
		}
		my_scanf("%s",a);
		k=strlen(a);
		for(j=0;j<k;j++)
		{
			d[j]=a[k-j-1]-'0';
		}
		for(j=0;j<l;j++)
		{
			s[j]=s[j]-d[j];
			if(s[j]<0)
			{
				s[j]=s[j]+10;
				s[j+1]=s[j+1]-1;
			}
		}
		for(j=l-1;j>=0;j--)
		{
			if(s[j]!=0) break;
		}
		for(h=j;h>=0;h--)
		{
			my_printf("%d",s[h]);
		}
		my_printf("\n");
	}
	return 0;
}

		