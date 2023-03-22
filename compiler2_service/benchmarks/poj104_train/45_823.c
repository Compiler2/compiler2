#define NUM_ITER 207766

#include <header.h>

main_bench()
{
int i,j,len,x;
char s[50],w[50];
my_scanf("%s%s",s,w);
len=strlen(s);
for(i=0;i<50;i++)
{
	x=0;
	for(j=i;j<len+i;j++)
		{
			if(s[j-i]!=w[j]) x++;
	    }
	if(x==0) break;
}
my_printf("%d",i);
}