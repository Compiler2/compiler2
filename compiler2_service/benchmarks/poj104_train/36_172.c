#define NUM_ITER 1069689

#include <header.h>

int main_bench()
{
	int i,j,n,m;
	char a[100],b[100];
	my_scanf("%s",a);
	my_scanf("%s",b);
	n=strlen(a);
         m=strlen(b);
         if(m==n)
         {
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(a[i]==b[j])break;
		if(j==n)break;
		else b[j]='&';
	}
	if(i<n)my_printf("%s\n","NO");
	else my_printf("%s\n","YES");
         }
         else my_printf("%s\n","NO");
}
