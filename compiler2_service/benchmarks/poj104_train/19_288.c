#define NUM_ITER 884923

#include <header.h>

main_bench()
{
	char str[101],a[101],b[101];
	int i=0,j,t;
	gets(str);
	my_scanf("%s",a);
	my_scanf("%s",b);
    do
	{
		j=0;
		t=i;
		while (str[i]==a[j]&&j<strlen(a))
		{
			i++;
			j++;
		}
		if (j==strlen(a)) 
		{
			my_printf(str[i]=='\0'?"%s":"%s ",b);
			i++;
		}
		else 
		{
			do
			{
			    my_printf("%c",str[t]);
				t++;
			}
		    while (str[t]!=' '&&str[t]!='\0');
			if (str[t]==' ') my_printf(" ");
		    i=t+1;
		}
	}
	while (str[i-1]!='\0');
	my_printf("\n");
	return 0;
}