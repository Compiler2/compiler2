#define NUM_ITER 957274

#include <header.h>

int main_bench()
{
char a[100],b[100];
int c,d,i,j,m,n,l,zeus,athena;
my_scanf("%s %s",a,b);
c=strlen(a);
d=strlen(b);
if(c!=d)athena=0;
if(c==d)
{
	for(i=0;i<c;i++)
	for(m=i;m<c;m++)
	{
		if(a[i]>a[m])
		{
			n=a[i];
			a[i]=a[m];
			a[m]=n;
		}
        if(b[i]>b[m])
		{
			l=b[i];
			b[i]=b[m];
			b[m]=l;
		}
	}
	zeus=1;
    for(i=0;i<c;i++)
	{
		if(a[i]!=b[i])
		{
			athena=0;zeus=0;break;
		}
	}
	if(zeus)athena=1;
}
if(athena) my_printf("YES");
else my_printf("NO");    
}