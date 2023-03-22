#define NUM_ITER 678198

#include <header.h>

int main_bench()
{
	int n,i,j;
	char s[501]={'0'};
	char a[501][6]={{0,0,0,0,0,0}};
	my_scanf("%d",&n);
	my_scanf("%s",s);
	int l;
	l=strlen(s)-n+1;
	int p=0,m;
	for(i=0;i<l;i++)
	{
      	m=p;
		for(j=0;j<n;j++)
		{
		
		      a[i][j]=s[m];
			  m++;
		}
		p=p+1;
	}

	int count[501]={0};
	p=0;
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(strcmp(a[i],a[j])==0)
			{
				count[p]=count[p]+1;
			}
		}
		p=p+1;
	}
	for(i=0;i<l;i++)
	{
		count[i]=count[i]+1;
	}
	int max=1;
	for(i=0;i<l;i++)
	{
         if(count[i]>max)
			 max=count[i];
	}
    if(max==1)
	{
			my_printf("NO\n");
			return 0;
	}
	else
	{
		my_printf("%d\n",max);
	}
	for(i=0;i<l;i++)
	{	
	    if(count[i]==max && max!=1)
		{
			for(j=0;j<n;j++)
				my_printf("%c",a[i][j]);
			my_printf("\n");
		}
	}
	return 0;
}