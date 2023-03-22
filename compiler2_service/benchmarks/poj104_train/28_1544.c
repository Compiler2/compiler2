#define NUM_ITER 1327909

#include <header.h>

int main_bench()
{
	char zfc[2000];
	gets(zfc);
	int sl=strlen(zfc);
	int n=0;
	for(int i=0;i<=sl;i++)
	{
		
		if(i==0)
		{
			n++;
			continue;
		}
		if(zfc[i]!=' '&&zfc[i]!='\0')
		{
			n++;
			continue;
		}
		if(zfc[i]==' '&&zfc[i-1]!=' ')
		{
			my_printf("%d,",n);
			n=0;
			continue;
		}
		if(zfc[i]==' '&&zfc[i+1]==' ')
		{
			continue;
		}
		if(zfc[i]=='\0')
		{
			my_printf("%d",n);
		}
	}
	return 0;
}
