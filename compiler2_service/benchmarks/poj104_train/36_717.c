#define NUM_ITER 813804

#include <header.h>

int main_bench()
{
	char a[100],b[100];int m,n,i,j,r=0,t=0,s=0,q=0,p=0,o=0;
	my_scanf("%s %s",&a,&b);
	m=strlen(a);n=strlen(b);
	for(i=0;i<m;i++)
	{
		r=r+a[i];
	}
    for(i=0;i<n;i++)
	{
		o=o+b[i];
	}


	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[j]==a[i])a[j]=0;
		}
	}
	for(i=0;i<m;i++)
	{
		t=t+a[i];
		if(a[i]!=0)s++;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[j]==b[i])b[j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		q=q+b[i];
		if(b[i]!=0)p++;
	}
	if(t==q&&s==p&&r==o)my_printf("YES");
	else
		my_printf("NO");
}
