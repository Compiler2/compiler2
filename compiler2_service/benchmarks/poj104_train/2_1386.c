#define NUM_ITER 623

#include <header.h>

int main_bench()
{
	int m;
	my_scanf ("%d",&m);
	int a[1000];
	char s[1000][26];
	int i,j;
	for (i=0;i<m;i++)
	{
		my_scanf ("%d %s",&a[i],s[i]);
	}
	char x;
	int max=0;
	char maxx;int l;
	for (x='A';x<='Z';x++)
	{ 
	   l=0;
	   for (i=0;i<m;i++)
	   {
	       for (j=0;j<26;j++)
		   {
			   if (s[i][j]==x)break;
		   }
		   if (j!=26)l++;
	   }
	   if (l>max){max=l;maxx=x;}
	}
	my_printf ("%c\n%d\n",maxx,max);
	for (i=0;i<m;i++)
	{
	     for (j=0;j<26;j++)
		 {
			  if(s[i][j]==maxx)break;
		 }
		   if (j!=26)my_printf ("%d\n",a[i]);
	}
	return 0;
}
