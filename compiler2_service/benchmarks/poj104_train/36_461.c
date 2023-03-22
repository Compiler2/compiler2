#include <header.h>

int main_bench()
{
	int i,j,k,m,n,*p,l1,l2,c=0;
	char a[100],b[100];
	my_scanf("%s %s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l2!=l1)my_printf("NO");
	else 
		{
			for(i=0;i<l1;i++)
		for(j=0;j<l2;j++)
			if(a[i]==b[j])
			{
				c++;
				b[j]='\0';
				break;
			}
	if(c==l1)my_printf("YES");
	else my_printf("NO");
	}
}