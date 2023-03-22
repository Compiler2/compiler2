#include <header.h>

int main_bench()
{
	int i,j,n;
	char a[100]={0},b[100]={0};
	my_scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))my_printf("NO");
	else
	{
	n=strlen(a);	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		if(a[i]==b[j]){a[i]='1';b[j]='1';break;}
	}
	if(!strcmp(a,b))my_printf("YES");
	else my_printf("NO");
	}
	return 0;
}