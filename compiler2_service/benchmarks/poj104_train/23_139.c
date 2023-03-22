#define NUM_ITER 1304228

#include <header.h>

int i,n,p,k;
char a[100],s[100][30];
int main_bench()
{
	gets(a);
	n=strlen(a);
	p=0;
	k=0;
	for(i=0;i<n;i++)
	{	
		if(a[i]!=' ')
			s[k][p++]=a[i];
		else
		{
			s[k][p]=0;
			p=0;
			k++;
		}
	}
	for(i=k;i>0;i--)
		my_printf("%s ",s[i]);
	my_printf("%s\n",s[0]);
}
