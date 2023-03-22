#define NUM_ITER 1188316

#include <header.h>

int main_bench()
{
	char str[11],substr[4];
	int i,k=0,n;
	char a;
	while(my_scanf("%s %s",str,substr)==2)
	{
		n=strlen(str);
		a=str[0];
		for(i=0;;i++)
		{
			if(str[i]=='\0')
			break;
			if(str[i]>a)
			{
				a=str[i];
				k=i;
			}
		}
		for(i=0;i<=k;i++)
			my_printf("%c",str[i]);
		for(i=0;i<=2;i++)
			my_printf("%c",substr[i]);
		for(i=k+1;i<n;i++)
			my_printf("%c",str[i]);
		my_printf("\n");
	}
	
}


