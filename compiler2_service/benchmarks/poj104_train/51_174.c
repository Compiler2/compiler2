#define NUM_ITER 152878

#include <header.h>

int main_bench()
{
	int i,n,j,m,l,a[500]={0},b[500]={0},max=0;
	char c[500][10]={"\0"},t,s[501];
	my_scanf("%d%s",&n,s);
	for(i=0;s[i];i++)
		for(j=0;j<n;j++)
			c[i][j]=s[i+j];
	l=strlen(s)-n+1;
	for(i=0;i<l;i++)
		b[i]=1;
	for(i=1;i<l;i++)
		for(j=0;j<i;j++)
			if(b[i])
				if(strcmp(c[i],c[j])==0)
			{
				a[j]++;
				b[i]=0;
			}
	for(i=0;i<l;i++)
		if(a[i]>max)
			max=a[i];
	if(max==0)
		my_printf("NO\n");
	else
	{
		my_printf("%d\n",max+1);
		for(i=0;i<l;i++)
	    	if(a[i]==max)
				my_printf("%s\n",c[i]);
	}
}