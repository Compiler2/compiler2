#include <header.h>

int main_bench()
{
	int n,i,len,j;
	char s[1000][255];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
		len=strlen(s[i]);
		for(j=0;j<len-1;j++)
		{
			if(s[i][j]=='A') my_printf("T");
            else if(s[i][j]=='T') my_printf("A");
            else if(s[i][j]=='G') my_printf("C");
            else if(s[i][j]=='C') my_printf("G");
		}
            if(s[i][len-1]=='A') my_printf("T\n");
            else if(s[i][len-1]=='T') my_printf("A\n");
            else if(s[i][len-1]=='G') my_printf("C\n");
            else if(s[i][len-1]=='C') my_printf("G\n");

	}
	return 0;
}
