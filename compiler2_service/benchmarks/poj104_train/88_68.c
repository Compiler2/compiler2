#define NUM_ITER 1354549

#include <header.h>

main_bench()
{
	int i,j;
	char a[30];
	gets(a); 
	i=0;
	while(i<strlen(a))
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			for(j=i;a[j]>='0'&&a[j]<='9';j++)
			my_printf("%c",a[j]);
			my_printf("\n");
			i=j+1;
		}
		else i++;
	}
} 