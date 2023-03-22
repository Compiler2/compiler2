#define NUM_ITER 1501905

#include <header.h>

main_bench()
{
	char s[4000];
	gets(s);
	int i,j;
	for(i=0;;i++)
	{
		if(s[i]!=' ')
		{
			for(j=1;;j++)
			{
				if(s[i+j]==' '||s[i+j]=='\0')
				{
					if(i==0)
						my_printf("%d",j);
					else
						my_printf(",%d",j);
				    break;
				}
			}
			i=i+j;
		}
		if(s[i]=='\0')
			break;
	}
	my_printf("\n");
}