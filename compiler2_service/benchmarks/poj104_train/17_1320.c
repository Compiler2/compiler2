#include <header.h>


int main_bench()
{
	int n,i,j,k,flag;
	char a[200],b[200];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		memset(b,0,200);
		my_scanf("%s",a);
		for (j=0;j<strlen(a);j++)
		{
			if (a[j]=='(')
			{
				flag=1;
				k=j+1;
				while (flag!=0&&k<strlen(a))
				{
					if (a[k]=='(')
						flag++;
					if (a[k]==')')
						flag--;
					k++;
				}
				if (k>=strlen(a)&&flag!=0)
					b[j]='$';
				else 
				{
					b[k-1]=' ';
					b[j]=' ';
				}
			}
			else if (a[j]==')'&&b[j]!=' ')
				b[j]='?';
			else b[j]=' ';
		}
		my_printf("%s\n",a);
		my_printf("%s\n",b);
	}
	return 0;
}
