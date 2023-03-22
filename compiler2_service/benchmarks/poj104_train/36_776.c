#include <header.h>

int main_bench()
{
	char a[100]={0},b[100]={0},t;
	int i,j,l;
	my_scanf("%s",a);
	my_scanf("%s",b);
	if (strlen(a)!=strlen(b)) 
		my_printf("NO");
	else 
		{
			l=strlen(a);
			for (i=0;i<l;i++)
				for (j=i;j<l;j++)
					if (a[i]==b[j])
					{
						t=b[i];
						b[i]=b[j];
						b[j]=t;
					}
			if (strcmp(a,b)==0) my_printf("YES");
			else my_printf("NO");
		}
	return 0;
}