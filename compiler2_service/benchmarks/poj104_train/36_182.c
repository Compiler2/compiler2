#include <header.h>

int main_bench()
{
	char t,a[100],b[100];
	int m,n,i,j;
	my_scanf("%s",a);my_scanf("%s",b);
    m=strlen(a);n=strlen(b);
	for(i=0;i<m;i++)
	{
		for(j=i;j<n;j++)
			if(a[i]==b[j]){t=b[j];b[j]=b[i];b[i]=t;}
	}
	if(strcmp(a,b)==0)my_printf("YES");
	else my_printf("NO");
}