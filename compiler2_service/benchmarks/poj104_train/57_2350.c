#define NUM_ITER 31036

#include <header.h>

int main_bench()
{int cases,i=0;
char str[100];
my_scanf("%d",&cases);
while(cases>0)
{ my_scanf("%s",str);
int n;
n=strlen(str);
if((str[n-2]=='e'&&str[n-1]=='r')||(str[n-2]=='l'&&str[n-1]=='y'))
{
	for(i=0;i<(n-2);i++)
	my_printf("%c",str[i]);
	
}
if(str[n-3]=='i'&&str[n-2]=='n'&&str[n-1]=='g')
{
	for(i=0;i<(n-3);i++)
	my_printf("%c",str[i]);
	
}
my_printf("\n");
cases--;
}
}
