#define NUM_ITER 1111016

#include <header.h>

int main_bench()
{
	char zfc[10000],zu[500][50];
	int len[500],i,j=0,k=0;
	gets(zfc);
	for(i=0;i<=strlen(zfc);i++)
	{
		if(zfc[i]==' ')
		{
			zu[j][k]='\0';
			j++;
			k=0;
		}
		else
		{
			zu[j][k]=zfc[i];
			k++;
		}
	}
	for(i=0;i<j+1;i++)
	{
		len[i]=strlen(zu[i]);
	}
	for(i=0;i<j;i++)
	{
		if(len[i]!=0)
		{
		   my_printf("%d,",len[i]);
		}
	}
	my_printf("%d",len[j]);
	return 0;
}
