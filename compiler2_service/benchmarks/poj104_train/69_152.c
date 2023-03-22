#define NUM_ITER 751695

#include <header.h>

int main_bench()
{
	int l1,l2,n,a,b,i,c[260];
	char s1[250],s2[250];
	my_scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	n=0;
	c[0]=0;
	while(l1 ||l2)
	{
		a=(l1>0)?s1[--l1]-48:0;
		b=(l2>0)?s2[--l2]-48:0;
		c[n]+=a+b;
		c[n+1]=c[n]/10;
		c[n++]=c[n]%10;
	}
	while(c[n--]==0 && n>=0);
	for(i=n+1;i>=0;i--)
		my_printf("%d",c[i]);
	return 0;
}