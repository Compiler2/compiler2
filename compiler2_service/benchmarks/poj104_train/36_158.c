#include <header.h>

int main_bench()
{
	char a[50]={'\0'};char b[50]={'\0'};
	int i,j;
	my_scanf("%s %s",a,b);
	if (strlen(a)!=strlen(b)) goto null;
	for (i=0;i<strlen(a);i++)
	{
		for (j=0;j<strlen(b);j++)
			if (a[i]==b[j])
			{
				b[j]='0';
				break;
			}
		if (j==strlen(b)) goto null;
	}
	my_printf("YES\n");
	goto allright;
null: my_printf("NO\n");
allright:;
}