#include <header.h>

int main_bench()
{
	char sen[500]={0},hb[500]={0};
	int n,len,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",sen);
		len=strlen(sen);                         
		for(j=0;j<len;j++)
		{            
			if(sen[j]=='A')
			{
				hb[j]='T';
			}
			if(sen[j]=='T')
			{
				hb[j]='A';
			}
			if(sen[j]=='C')
			{
				hb[j]='G';
			}
			if(sen[j]=='G')
			{
				hb[j]='C';
			}
		}
		for(j=0;j<len;j++)
		{
			my_printf("%c",hb[j]);
		}
		my_printf("\n");
	}
	return 0;
}

