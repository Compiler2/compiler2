#define NUM_ITER 978463

#include <header.h>

int main_bench()
{
	char ch[101],str[101];
	int i,j,k,m,n;
	my_scanf("%s",ch);
	m=strlen(ch);
	my_scanf("%s",str);
	n=strlen(str);
	k=0;
	if (m!=n)
		my_printf("NO");
	else
	{
		for (i=0;i<m;i++)
		{
			for (j=0;j<m;j++)
			{
				if (ch[i]==str[j])
				{
					k=k+1;
					str[j]=' ';
					break;
				}
			}
		}
		if (k==m)
		my_printf("YES");
		else
			my_printf("NO");
	}
	return 0;
}