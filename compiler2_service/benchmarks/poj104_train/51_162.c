#define NUM_ITER 665767

#include <header.h>

int main_bench()
{
	int len,n,i,j,k,f,m,max,t,q[502]={0};
	char a[502]={'\0'},c[502][7]={'\0'};
	my_scanf("%d%s",&n,a);
	len=strlen(a);
	len=len-n+1;
	for(k=0;k<len;k++)
	{
		for(i=0;i<n;i++)
		c[k][i]=a[i+k];
	}
	max=1;
	for(k=0;k<len;k++)
	{
		for(t=k;t<len;t++)
		{
			if(strcmp(c[k],c[t])==0)
				q[k]=q[k]+1;
		}
		if(q[k]>max)
			max=q[k];
	}
	if(max==1)
		my_printf("NO");
	else
	{
		my_printf("%d\n",max);
	    for(i=0;i<len;i++)
		{
		    if(q[i]==max)
			{
		     	my_printf("%s\n",c[i]);
			}
		}
	}
}