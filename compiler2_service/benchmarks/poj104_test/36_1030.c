#define NUM_ITER 1041760

#include <header.h>

int main_bench()
{
	char letter1[100],letter2[100],*le1,*le2;
	le1=letter1;
	le2=letter2;
	my_scanf("%s %s",le1,le2);
	int _break;
	if(strlen(letter1)==strlen(letter2))
	{
		for(;*le1!='\0';le1++)
		{
			le2=letter2;
			_break=0;
			for(;*le2!='\0';le2++)
			{
				if(*le1==*le2)
				{
					*le2='0';
					_break=1;
					break;
				}
			}
			if(_break==0)
			{
				my_printf("NO\n");
				_break=2;
				break;
			}
		}
		if(_break!=2)
			my_printf("YES\n");
	}
	else
		my_printf("NO\n");
	return 0;
}
	