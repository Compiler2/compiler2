#include <header.h>

int main_bench()
{
	int n,i,j,Asc,point;
	char str[10],substr[3];
	while (my_scanf("%s%s",str,substr)==2)
	{
		point=0;Asc=0;
		for (i=0;i<=strlen(str);i++)
			if (str[i]>Asc)
			{
				Asc=str[i];
				point=i;
			}
		for (i=0;i<=point;i++) 
			my_printf("%c",str[i]);
		for ( j=0;j<strlen(substr);j++)
			my_printf("%c",substr[j]);
		for (i=point+1;i<strlen(str);i++) 
			my_printf("%c",str[i]);
                   my_printf("\n");
	}
}
