#include <header.h>

int main_bench()
{
	int n,i,m[1000],j;
	char s[1000][255];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&s[i]);
		m[i]=strlen(s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(m[i]>=2)
		{
		   for(j=0;j<m[i]-1;j++)
		   {
	 		    if(s[i][j]=='A')
				   my_printf("T");
			    if(s[i][j]=='T')
				   my_printf("A");
		      	if(s[i][j]=='G')
				   my_printf("C");
			    if(s[i][j]=='C')
				   my_printf("G");
		   }
		   if(s[i][m[i]-1]=='A')
			  my_printf("T\n");
		   if(s[i][m[i]-1]=='T')
			  my_printf("A\n");
		   if(s[i][m[i]-1]=='G')
			  my_printf("C\n");
		   if(s[i][m[i]-1]=='C')
			  my_printf("G\n");
		}
		else
		{
			 if(s[i][0]=='A')
				   my_printf("T\n");
			 if(s[i][0]=='T')
				   my_printf("A\n");
		     if(s[i][0]=='G')
				   my_printf("C\n");
			 if(s[i][0]=='C')
				   my_printf("G\n");
		}
	}
	return 0;
}


