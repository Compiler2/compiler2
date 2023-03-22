#define NUM_ITER 1304540

#include <header.h>

int main_bench()
{	
	
	int len,k=0,i,n;
	char sen[3001];
	gets(sen);
	len=strlen(sen);
	
	for(i=0;i<len;i++)
	{	
		
		if(sen[i]==' '&&k!=0)
		{	my_printf("%d,",k);
			k=0;
		
		}
		else if(i==len-1)
		{
			my_printf("%d",k+1);
			k=0;
		}
		else {if(sen[i]!=' ')k++;}
	}
	
	
	return 0;
}

