#include <header.h>

int main_bench()
{
	char a[80],b[80];
	int i,m,n,t,p=1;
	gets (a);
	gets (b);
    m=strlen (a);
	n=strlen (b);
	t=(m>n)?m:n;
	for (i=0;i<t;i++)
	{
		if (a[i]>96) a[i]=a[i]-32;
		if (b[i]>96) b[i]=b[i]-32;
		if (a[i]>b[i]) {my_printf (">");p=0;break;}
		else if (a[i]<b[i]) {my_printf ("<");p=0;break;}
	}
    if (p) 
		if (m>n) my_printf (">");
		else if (m=n) my_printf("=");
		     else my_printf ("<");
}