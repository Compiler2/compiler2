#include <header.h>

void tran(char s[])
{
	int i,j,len;
	char t;
	len=strlen(s);
	for (i=0;i<len-1;i++)
	{
		for (j=i+1;j<len;j++)
		{
			if (s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
}
int main_bench()
{
	char a[50],b[50];
	my_scanf("%s%s",a,b);
	tran(a);
	tran(b);
	if (strcmp(a,b)==0)
		my_printf("YES\n");
	else my_printf("NO\n");
}

