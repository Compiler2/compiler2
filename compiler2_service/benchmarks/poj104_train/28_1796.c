#define NUM_ITER 1247864

#include <header.h>

int main_bench()
{
	int len,i,cout,j;
    char b[10000];
	gets(b);
    len=strlen(b);
	for(i=0;i<len;i++)
	{
		cout=0;
		while((b[i]!=' ')&&(i<len))
		{
			cout++;
		    i++;
		}
		my_printf("%d",cout);
			break;
	}
	for(j=i+1;j<len;j++)
	{
		cout=0;
		if(b[j]==' ')
		{
			continue;
		}
		while((b[j]!=' ')&&(j<len))
		{
			cout++;
		    j++;
		}
		my_printf(",%d",cout);
	}
	return 0;
}