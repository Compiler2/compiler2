#include <header.h>

void daopai(char *pt)
{
	int i,s=0,m=0;
	char *index[100];
	for(i=0;*(pt+i)!='\0';i++)
	{
		if((*(pt+i)!=' ')&&(s==0)) 
		{
			index[m]=pt+i;
			s=1;
		}
		else if(*(pt+i)==' ')
		{
			m=m+1;
			s=0;
		}
	}
	if(m!=0)
	{
		for(;*(index[m])!='\0';index[m]++)
		my_printf("%c",*(index[m]));
	my_printf(" ");
	for(i=(m-1);i>0;i--)
	{
		for(;*(index[i])!=' ';index[i]++)
			my_printf("%c",*(index[i]));
		my_printf(" ");
	}
	for(;*(index[0])!=' ';index[0]++)
		my_printf("%c",*(index[0]));
	}
	else
	{
		for(;*(index[0])!='\0';index[0]++)
			my_printf("%c",*(index[0]));
	}
}
int main_bench()
{
	char str[100],*p=str;
	gets(p);
	daopai(p);
return 0;
}