#define NUM_ITER 35298

#include <header.h>

int main_bench()
{
	char * character,sz[81];
	int i,j,n,e;
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		e=0;
		character=sz;
		gets(character);
		if(*character=='_'||(*character>=65&&*character<=90)||(*character>=97&&*character<=122))
		{
			for(; *character!='\0';++character)
			{
				if(*character=='_'||(*character>=65&&*character<=90)||
					(*character>=97&&*character<=122)||(*character>=48&&*character<=57))
					continue;
				else
				{
					my_printf("%d\n",0);
					e=1;
					break;
				}
			}
			if(e==0)
				my_printf("%d\n",1);
		}
		else
			my_printf("%d\n",0);
	}
	return 0;
}