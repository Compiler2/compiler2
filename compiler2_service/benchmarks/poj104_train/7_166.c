#define NUM_ITER 911183

#include <header.h>

int main_bench()
{
	char a[260],b[260],c[260];
	my_scanf("%s %s %s",a,b,c);
	int i,j,t,l,k=0,m=0;
	l=(int)strlen(a);
	t=(int)strlen(b);
	for(i=0;i<l-t+1;i++)
	{
		for(j=0;j<t;j++)
		{
			if(a[i+j]!=b[j])
				k=0;
			if(a[i+j]==b[j])
				k=k+1;	
			if(t==k)
			{
				m=i;
				i=l;
			} 
		}
	}
	if(m==0)
		my_printf("%s",a);
	if(m!=0)
	{
		for(i=0;i<m;i++)
			my_printf("%c",a[i]);
		my_printf("%s",c);
		for(i=m+t;i<l;i++)
			my_printf("%c",a[i]);
	}
	return 0;
}
