#define NUM_ITER 529

#include <header.h>

struct book
{
	int order;
	int num;
	char writer[26];
}b[1000];
int main_bench()
{
	int n,i,j,k,p,q[1000];
	my_scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		my_scanf("%d %s",&b[i].num,b[i].writer);
		b[i].order=i;
	}
	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int c[26];
	char d[26]; 
	for(j=0;j<=25;j++)
	{
	   d[j]=0;
	   c[j]=0;
	}
    for(k=0;k<=25;k++)
	{
		for(i=0;i<=(n-1);i++)
		{
           p=strlen(b[i].writer);
		   strcpy(d,b[i].writer);
	       for(j=0;j<=(p-1);j++)
		   {
			   if(d[j]==a[k])
			   {
				   c[k]=c[k]+1;
			   }
		   }
		   for(j=0;j<=25;j++)
		   {
			   d[j]=0;
		   }
		}
	}
	int max=c[0];
	for(i=0;i<=25;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
		}
	}
	char x;
    for(i=0;i<=25;i++)
	{
		if(c[i]==max)
		{
			x=a[i];
			my_printf("%c\n",a[i]);
			my_printf("%d\n",c[i]);
		}
	}

	for(i=0;i<=999;i++)
	{
		q[i]=0;
	}
    int r=0;
	char e[26];
	for(i=0;i<=25;i++)
	{
		e[i]=0;
	}
	for(i=0;i<=(n-1);i++)
	{
		p=strlen(b[i].writer);
		strcpy(e,b[i].writer);
		for(j=0;j<=(p-1);j++)
		{
			if(e[j]==x)
			{
                q[r]=b[i].num;
				r=r+1;
			}
		}
		for(j=0;j<=25;j++)
		{
		   e[j]=0;
		}
	}
    int s=0;
	for(i=0;i<=999;i++)
	{
		if(q[i]!=0)
		{
			s=s+1;
		}
	}
	for(i=0;i<=(s-2);i++)
	{
		my_printf("%d\n",q[i]);
	}
	my_printf("%d",q[s-1]);

	return 0;
}