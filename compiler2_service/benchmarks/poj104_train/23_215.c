#define NUM_ITER 1192159

#include <header.h>

int main_bench()
{char a[101],t;int n,i,k,m,r=0;
gets(a);
n=strlen(a);
for(i=n-1;i>=0;i--)
if(a[i]==' ') r++;
if(r==0) 
{for(i=0;i<n;i++)
	my_printf("%c",a[i]);
}
else
{
for(i=n-1;i>=0;i--)
{if(a[i]==' ') {k=i;break;}}
for(i=k+1;i<n;i++)
my_printf("%c",a[i]);
m=k;
    for(i=m-1;i>=0;i--)
	{ if(a[i]==' ')
	{k=i;
	      for(i=k;i<m;i++)
               my_printf("%c",a[i]);
		  }
	m=k;
	}
	my_printf(" ");
	for(i=0;i<m;i++)
	my_printf("%c",a[i]);
}
}