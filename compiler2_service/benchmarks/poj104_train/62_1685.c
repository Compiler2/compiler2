#define NUM_ITER 1426714

#include <header.h>

int main_bench()
{
    int i,j=0;
	char zfc[1000];
	char a[1000];
	gets(zfc);
    for(i=0;zfc[i]!='\0';i++)
	{
		if(zfc[i]!=' ')
		{
			a[j]=zfc[i];
			j++;
		}
		else if(zfc[i+1]==' ')
		{
			continue;
		}
		else
		{
		 a[j]=zfc[i];
			j++;;
		}
	}
	a[j]='\0';
	my_printf("%s\n", a);
	return 0;
}