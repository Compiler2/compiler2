#include <header.h>


void find(char c[])
{
	int i,a[26]={0};
	for (i=0;c[i];i++)
		a[c[i]-'a']++;
	for (i=0;c[i];i++)
		if (a[c[i]-'a']==1)
		{
			my_printf ("%c\n",c[i]);
			return;
		}
	my_printf ("no\n");
}

main_bench()
{
	int t,i;
	char c[100000];
	my_scanf ("%d\n",&t);
	for (i=0;i<t;i++)
	{
		gets (c);
		find (c);
	}
}