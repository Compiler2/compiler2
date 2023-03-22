#define NUM_ITER 31265

#include <header.h>

int main_bench()
{
int n,i,j,x;
char zfc[256];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{my_scanf("%s",&zfc);
x=strlen(zfc);
if((zfc[x-1]=='y')||(zfc[x-1]=='r'))
	{for(j=0;j<x-3;j++)
		{my_printf("%c",zfc[j]);}
	my_printf("%c\n",zfc[x-3]);}
else if(zfc[x-1]=='g')
	{for(j=0;j<x-4;j++)
		{my_printf("%c",zfc[j]);}
	my_printf("%c\n",zfc[x-4]);}
else{my_printf("%s\n",zfc);}
}
return 0;
}