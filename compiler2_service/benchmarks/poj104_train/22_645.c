#include <header.h>


int main_bench()
{
	int a[300]={0},i,j,n,k,t;
	char tmp;
	for(i=0;i<300;i++)
	{
		my_scanf("%d%c",&a[i],&tmp);
		if(tmp=='\n') {n=i+1;break;}
	}
	for(i=0;i<n-1;i++)
		if(a[i]==a[i+1]);
		else break;
	if(i==n-1) my_printf("No\n");
	else
	{
		for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(a[k]<a[j])
					k=j;
			if(k!=i)
			{
				t=a[k];
			    a[k]=a[i];
			    a[i]=t;
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1]);
			else break;
		}
		my_printf("%d\n",a[i+1]);
	}
}
