#define NUM_ITER 38039

#include <header.h>

int main_bench()
{
	int s1[300],i,n,j=0,a=0;
	float b,s2[300],c;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&s1[i]);
	for(i=0;i<n;i++)
		a+=s1[i];
	b=(float)a/n;
	for(i=0;i<n;i++)
	{
		s2[i]=s1[i]-b;
		if(s2[i]<0)
			s2[i]=0-s2[i];
	}
	for(i=1,c=s2[0];i<n;i++)
	{
		if(s2[i]>c)
		{
			c=s2[i];
			j=i;
		}
	}
	my_printf("%d",s1[j]);
	for(i=0;i<n;i++)
	{
		if(s2[j]==s2[i]&&i!=j)
			my_printf(",%d",s1[i]);
	}
}