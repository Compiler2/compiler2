#define NUM_ITER 47939

#include <header.h>

int main_bench()
{
	int n,m,a[300],c[300],t;
	float x,b[300],s;
	my_scanf("%d\n",&n);
	for(m=0,x=0;m<n;m++)
	{
		my_scanf("%d",&a[m]);
		x=x+a[m];
	}
	x=x/n;
	for(m=0,s=0;m<n;m++)
	{
		b[m]=x-a[m];
		if(s<0)s=-s;
		if((b[m]>0&&b[m]>s)||(b[m]<0&&b[m]<-s))s=b[m];
	}
	if(s<0)s=-s;
	for(m=0,t=0;m<n;m++)
		if(b[m]==s||b[m]==-s){c[t]=a[m];t++;}
		c[t]='a';
	for(m=0;c[m+1]!='a';m++)
		for(t=m+1;c[t]!='a';t++)
		if(c[m]>c[t])
			{
			n=c[m];
			c[m]=c[t];
			c[t]=n;
			}
	for(m=0;c[m+1]!='a';m++)
		my_printf("%d,",c[m]);
	my_printf("%d",c[m]);
	return 0;
}