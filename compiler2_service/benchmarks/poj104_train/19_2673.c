#define NUM_ITER 833414

#include <header.h>

int main_bench()
{
	char s[10000];
	char tmp[105],a[105],b[105];
	int i,j;
	gets(s);
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0,j=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			tmp[j]='\0';
			j=0;
			if(strcmp(a,tmp)==0)
			{
				my_printf("%s ",b);
			}
			else 
			{
				my_printf("%s ",tmp);
			}
		}
		else
		{
			tmp[j]=s[i];
			j++;
			
		}
	}
	tmp[j]='\0';
	if(strcmp(a,tmp)==0)
			{
				my_printf("%s\n",b);
			}
			else 
			{
				my_printf("%s\n",tmp);
			}
	return 0;
}