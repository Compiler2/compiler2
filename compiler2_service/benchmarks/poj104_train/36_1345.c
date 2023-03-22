#include <header.h>

main_bench()
{
	char a[100]={0},b[100]={0};
	my_scanf("%s",a);my_scanf("%s",b);
	int m,n;
	m=strlen(a);n=strlen(b);
	if(m!=n) my_printf("NO");
	else
	{
		int i,j,k,l;
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				if(b[j]==a[i]) break;
			}
			if(j==m) break;
			else b[j]='\0';
		}
		if(i<m) my_printf("NO");
		else my_printf("YES");
	}
	return 0;
}