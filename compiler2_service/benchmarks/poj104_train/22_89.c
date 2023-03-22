#define NUM_ITER 85923

#include <header.h>

int main_bench()
{
	int i,t,a[300],b,n=0,j;
	char c;
	for(i=0;i<300;i++)a[i]=-1;
	for(i=0;i<300;i++)
	{
		my_scanf("%d",&a[i]);
		c=getchar();
		n++;
		if(c=='\n')break;
	}
	j=0;
	if(n==1)j=0;
	for(i=0;i<n;i++)
		if(a[0]!=a[i])j++;
	for(i=0;i<n;i++)
	{
		for(b=0;b<n-i;b++)
			if(a[b]<a[b+1])
			{t=a[b];
			a[b]=a[b+1];
			a[b+1]=t;}
	}
	int m[300],k;
	k=0;
	for(i=0;i<n;i++)
		if(a[i]>a[i+1])
		{
			m[k]=a[i];
			k++;
		}
	if(j==0)my_printf("No");
	else my_printf("%d",m[1]);
}