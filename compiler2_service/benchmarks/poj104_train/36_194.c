#include <header.h>


void change(char aa[])
{
	int len,i,j;
	char cha;
	len=strlen(aa);
	for (i=0;i<len-1;i++)
		for(j=len-2;j>=i;j--)
			if (aa[j]>aa[j+1])
			{
				cha=aa[j];
				aa[j]=aa[j+1];
				aa[j+1]=cha;
			}
}

int main_bench()
{
	int i,j;
	char a[1000],b[1000];
	my_scanf("%s %s",a,b);
	change(a);
	change(b);
	if(strcmp(a,b)==0) my_printf("YES\n");
	else my_printf("NO\n");
}