#include <header.h>

void sxpl(char x[]);
int main_bench()
{
	char a[50],b[50];
	my_scanf("%s%s",a,b);
	sxpl(a);
	sxpl(b);
	if(strcmp(a,b)==0) my_printf("YES\n");
	else my_printf("NO\n");
}
void sxpl(char x[])
{
	int i,j,k,l;
	char m;
	l=strlen(x);
	for(i=0;i<l-1;i++)
	{
		k=i;
		for(j=i+1;j<l;j++)
			if(x[j]<x[k]) k=j;
		m=x[k];x[k]=x[i];x[i]=m;
	}
}