#define NUM_ITER 31254

#include <header.h>

int main_bench()
{
	int n,i;
	char s[100];
	int m;
	int j;
	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf ("%s",s);
		
		m=strlen (s);
	    if (s[m-1]=='r'&&s[m-2]=='e')
		{
			for (j=0;j<m-2;j++)
				my_printf("%c",s[j]);my_printf ("\n");
		}
		else if (s[m-1]=='y'&&s[m-2]=='l')
		{
			for (j=0;j<m-2;j++)
				my_printf("%c",s[j]);my_printf ("\n");
		}
		else if (s[m-1]=='g'&&s[m-2]=='n'&&s[m-3]=='i')
		{
			for (j=0;j<m-3;j++)
				my_printf("%c",s[j]);my_printf ("\n");
		}
	   else 
		   my_printf ("%s\n",s);
	   }
	return 0;
}