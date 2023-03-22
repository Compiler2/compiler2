#include <header.h>

int main_bench()
{   int m=0,i,l,n=0;
	char a[20],b[20],*p1,*p2;
    my_scanf("%s",&a);
	my_scanf("%s",&b);
	p1=a;p2=b;
	int x,y;
	x=strlen(a);
	y=strlen(b);
	if (x!=y) 
		my_printf("NO\n");
	else
	{
		for(i=0;i<x;i++,p1++)
		{
			for(l=0;l<x;l++,p2++)
			{
			    if ((*p1)==(*p2)) n=1;
			}
		    if (n==0) m=0;
		    else m=1;
		    p2=b;
		}
	
	if (m==0) my_printf("NO\n");
	else my_printf("YES\n");
	}
}