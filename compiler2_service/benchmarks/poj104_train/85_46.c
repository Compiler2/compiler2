#define NUM_ITER 31118

#include <header.h>

int main_bench()
{
	int n,i,j,leng;
	my_scanf ("%d",&n);
	char s[100][20];
	for (i=0;i<n;i++)
	{
		my_scanf ("%s",s[i]);
	}
	for (i=0;i<n;i++)
	{
		leng=strlen(s[i]);
		for (j=0;j<leng;j++)
		{
			if (s[i][j]!='_'&&j==0&&(s[i][j]<'A'||(s[i][j]>'Z'&&s[i][j]<'a')||(s[i][j]>'z')))
			{
				my_printf ("no\n");
				break;
			}
            if (j!=0)
			{
			   if (s[i][j]!='_'&&s[i][j]<'0'||(s[i][j]>'9'&&s[i][j]<'A')||(s[i][j]>'Z'&&s[i][j]<'a')||(s[i][j]>'z'))
			   {
				  my_printf ("no\n");
				  break;
			   }
			}
		}
		if (j==leng)my_printf("yes\n");
	}
	return 0;
}



