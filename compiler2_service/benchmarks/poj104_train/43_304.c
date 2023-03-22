#include <header.h>

int issn(int n);
int main_bench()
{
	
int n,a,b=0,c;
	
int z[10000];
	
my_scanf("%d",&n);
	

    for(a=3;a<n+100;a++)
	
{
	
	
if(issn(a))
	
	
{
	
	
	
z[b]=a;
	
	
	
b++;
	
	
}
	
}
	

	
for(a=0;a<=b-1;a++)
	
{
	
	
for(c=a;c<b-1;c++)
	
	
{
	
	
	
if(z[a]+z[c]==n)
	
	
	
{
	
	
	
	
my_printf("%d %d\n",z[a],z[c]);
	
	
	
}
	
	
}
	
}
	

	
return 0;
}

int issn(int n)
{
    int a,b=1;
	
for(a=2;a<n;a++)
	
{
	
	
if(n%a==0) b=0;
	
}
    return b;
}