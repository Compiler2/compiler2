#define NUM_ITER 1293558

#include <header.h>

int main_bench()
{
	char blabla[5000];
	int len,i;
	gets(blabla);
	len=strlen(blabla);
	for(i=0;i<len;i++)
	{
		switch (blabla[i])
		{
		case ' ':
			if(i!=0&&blabla[i-1]!=' ')
				my_printf("%c",blabla[i]);
			break;
		default:
			my_printf("%c",blabla[i]);
			break;
		}
	}
	my_printf("\n");
	return 0;
}
