#define NUM_ITER 447947

#include <header.h>

int main_bench()
{
	short length,i,j=1;
	char number[6];
		while(j<=4)
		{
			my_scanf("%s",number);
			length=strlen(number);
			for(i=length-1;i!=-1;i--)
			{
				my_printf("%c",number[i]);
			}
			putchar('\n');
			j++;
		}
	return(0);
}