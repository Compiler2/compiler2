#define NUM_ITER 879248

#include <header.h>


int main_bench()
{
	int i,j,k,l,w,s;
	float n,p,q,o;
	char a[10000],b[10000];
	my_scanf("%f",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
	i=strlen(a);
	j=strlen(b);
	w=0;
	s=0;
	for(k=0;a[k];k++)
	{if(a[k]!='A'&&a[k]!='T'&&a[k]!='G'&&a[k]!='C')
	{w++;}
	}
	for(k=0;b[k];k++)
	{if(b[k]!='A'&&b[k]!='T'&&b[k]!='G'&&b[k]!='C')
	{w++;}
	}
	if((i!=j)||w!=0)
	{my_printf("error");}
	else
	{
		for(l=0;a[l];l++)
	{
		if(a[l]==b[l])
		{s++;}
	}
	p=i;
	q=s;
	o=q/p;
	if(o>n)
	{my_printf("yes");}
	else
	{my_printf("no");}
	}
	return 0;
}