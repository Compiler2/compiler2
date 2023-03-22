#include <header.h>

int main_bench()
{
	char s[50],w[50];
	my_scanf("%s",s);
	my_scanf("%s",w);
	int t=0,m,l,k;
	int i=strlen(s)-1;
	int j=strlen(w)-1;
	for(k=0;;k++)
	{
		m=k;
		for(l=0;l<=i;l++,m++)
		{	
			t=0;
			if(w[m]!=s[l])
			{
			t=1;
			break;
			}
		}
		if(t==0)
			break;

	}
	my_printf("%d",k);
}