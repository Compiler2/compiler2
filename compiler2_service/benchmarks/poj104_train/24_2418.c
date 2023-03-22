#define NUM_ITER 208151

#include <header.h>


int main_bench()
{
	char word[201][100] = {0};
	int len[201] = {0};
	int count = 0;
	int in = 0;
	char curword[100] = {0};
	int curlen = 0;
	int maxindex = -1;
	int minindex = -1;
	while ( 1 )
	{
		in = getchar();
		if ( in == ' ' || in == ',' || in == '\n' )
		{
			if ( curlen > 0 )
			{
				curword[curlen] = '\0';
				strcpy( word[count], curword );
				len[count] = curlen;
				if ( maxindex == -1 || curlen > len[maxindex] )
				{
					maxindex = count;
				}
				if ( minindex == -1 || curlen < len[minindex] )
				{
					minindex = count;
				}
				count++;
				curlen = 0;
			}

			
			if ( in == '\n' )
				break;
		}
		else
		{
			curword[curlen++] = in;

		}
	}
	my_printf("%s\n", word[maxindex]);
	my_printf("%s", word[minindex]);
	return 0;
}