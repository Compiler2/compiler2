#define NUM_ITER 1272933

#include <header.h>

main_bench()
{
	int l,i=0,num=0;
	char str[1000];
	gets(str);
	l=strlen(str);
    if(str[0]!=' ')
	{
		while(str[i]!=' '&&i<=l-1)
		{
			i++;
		}
		my_printf("%d",i);
		while(i<=l-1)
		{
			if(str[i]==' '&&str[i+1]!=' '&&i<=l-2)
			{
				i++;
				while(str[i]!=' '&&i<=l-1)
				{
					num++;
					i++;
				}
				my_printf(",%d",num);
				num=0;
				i--;
			}
			i++;
		}
		my_printf("\n");
	}
	else
	{
		while(str[i]==' ')
		{
			i++;
		}
		num=0;
		while(str[i]!=' '&&i<=l-1)
		{
			num++;
			i++;
		}
		my_printf("%d",num);
		i--;
		num=0;
		while(i<=l-1)
		{
			if(str[i]==' '&&str[i+1]!=' '&&i<=l-2)
			{
				i++;
				while(str[i]!=' '&&i<=l-1)
				{
					num++;
					i++;
				}
				my_printf(",%d",num);
				num=0;
				i--;
			}
			i++;
		}
		my_printf("\n");
	}
}
