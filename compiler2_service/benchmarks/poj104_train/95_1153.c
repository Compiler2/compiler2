#define NUM_ITER 265250

#include <header.h>

int main_bench()
{
	char s[2][80];
	int i,j,a;
	gets(s[0]);
	gets(s[1]);
	for(i=0;i<2;i++)
	{
		for(j=0;j<80;j++)
		{
			if(s[i][j]>='a'&&s[i][j]<='z')
				s[i][j]=s[i][j]-32;
		}
	}
	a=strcmp(s[0],s[1]);
	if(a>0)
		my_printf(">");
	else
		if(a<0)
			my_printf("<");
		else
			my_printf("=");
}