#define NUM_ITER 1082449

#include <header.h>

int main_bench()
{
	int d = 'a' - 'A';
	char s[80],sl[80];
	int p =	1;
	gets (s);
	gets (sl);
	int i;
	for (i=0;s[i]!='\0';i++)
	{
		if (s[i]<'Z') s[i] = s[i] + d;
	}
    for (i=0;s[i]!='\0';i++)
	{
		if (sl[i]<'Z') sl[i] = sl[i] + d;
	}
    for (i=0;s[i]!='\0'&&sl[i]!='\0';i++)
	{
		if (s[i]>sl[i]) 
		{
			p = 0;
			my_printf (">");
			break;
		}
		else if (s[i]<sl[i])
		{
			p = 0;
			my_printf ("<");
			break;
		}
	}
	if (p) my_printf ("=");	
	return 0;
}