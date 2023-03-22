#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	char s[256];
	for(i=0;i<n;i++)
	{
	   my_scanf("%s",s);

	   for(j=0;j<strlen(s);j++)
	   {
		   if(j<strlen(s)-1)
		   {
		      if(s[j]=='A') my_printf("T");
		      if(s[j]=='T') my_printf("A");
		      if(s[j]=='C') my_printf("G");
		      if(s[j]=='G') my_printf("C");
		   }
		   else
		   {
			  if(s[j]=='A') my_printf("T\n");
		      if(s[j]=='T') my_printf("A\n");
		      if(s[j]=='C') my_printf("G\n");
		      if(s[j]=='G') my_printf("C\n");
		   }

	   }

	}
	return 0;
}
