#include <header.h>


int main_bench()
{
	int n,m,i;
	int s[30];
	int *p,end;
	my_scanf("%d%d\n",&n,&m);
m=m%n;
if(m!=0)
{
	for(i=0;i<n;i++)
		my_scanf("%d",&s[i]);
loop:
	end=*(s+n-1);
	for(p=s+n-1;p>s;p--)
		*p=*(p-1);
	    *s=end;
		m--;
	if(m>0) goto loop;

    my_printf("%d",s[0]);
	for(i=1;i<n;i++)
	{
		my_printf(" %d",s[i]);
	}
}

else if(n==m||m==0)
{
    my_printf("%d",s[0]);
	for(i=1;i<n;i++)
	{
		my_printf(" %d",s[i]);
	}
}
	return 0;
}
