#define NUM_ITER 23212

#include <header.h>

int main_bench()
{
	int n,a[100000],b[100000],c[100000],sum[100000],i,t1,t2,t3,s1,s2,s3;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%d%d%d",&a[i],&b[i],&c[i]);
	sum[i]=b[i]+c[i];}
	for(i=0,t1=0,s1=a[0];i<n;i++)
	{if(sum[i]>t1)
	{t1=sum[i];
	s1=a[i];}}
	my_printf("%d %d\n",s1,t1);
	for(i=0,t2=0,s2=a[0];i<n;i++)
	{if(a[i]==s1)continue;
	if(sum[i]>t2)
	{t2=sum[i];
	s2=a[i];}}
	my_printf("%d %d\n",s2,t2);
	for(i=0,t3=0,s3=a[0];i<n;i++)
	{if(a[i]==s1||a[i]==s2)continue;
	if(sum[i]>t3)
	{t3=sum[i];
	s3=a[i];}}
	my_printf("%d %d\n",s3,t3);
	return 0;
}