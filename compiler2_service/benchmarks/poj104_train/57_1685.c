#include <header.h>

int main_bench()
{
	int n,i,j,k,length;
	my_scanf("%d",&n);
	for (k=0;k<n;k++)
	{
		char str[50];
		char daoz[50]={0};
		my_scanf("%s",str);
		length=strlen(str);
		for (i=length-1,j=0;i>=length-2;i--,j++)
		{
			daoz[j]=str[i];
             
		}
		
		if(strcmp(daoz,"re")==0)
		{
			for (i=0;i<=length-3;i++)
			{
				my_printf("%c",str[i]);
			}
			my_printf("\n");
		}
		if(strcmp(daoz,"yl")==0)
		{
			for (i=0;i<=length-3;i++)
			{
				my_printf("%c",str[i]);
			}
			my_printf("\n");
		}
		for (i=length-1,j=0;i>=length-3;i--,j++)
		{
			daoz[j]=str[i];
             
		}
		
		if(strcmp(daoz,"gni")==0)
		{
			for (i=0;i<=length-4;i++)
			{
				my_printf("%c",str[i]);
			}
			my_printf("\n");
		}
		
	}
return 0;
}


		