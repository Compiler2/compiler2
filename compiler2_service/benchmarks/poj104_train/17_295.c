#define NUM_ITER 101637

#include <header.h>

void pipei(char x[],int l)
{
	int i,j,count;
	for(;count!=0;)
	{
		count=0;
		for(i=0;i<l;i++)
		{
			if(x[i]!='(')
				continue;
			for(j=i+1;j<l;j++)
			{
				if(x[j]!='('&&x[j]!=')')
					continue;
				if(x[j]=='(')
					break;
				if(x[j]==')')
				{
					count++;
					x[i]=32;x[j]=32;
					break;
				}
			}
		}
	}
	for(i=0;i<l;i++)
	{
		if(x[i]!='('&&x[i]!=')')
			my_printf(" ");
		else if(x[i]=='(')
			my_printf("$");
		else
			my_printf("?");
	}
	my_printf("\n");
}
int main_bench()
{
	char x[101];
	int l,i;
	for(;;)
	{
		gets(x);
		if(x[0]=='\0')
			break;
		l=strlen(x);
		puts(x);
		pipei(x,l);
		for(i=0;i<l;i++)
			x[i]='\0';
	}
}