#define NUM_ITER 818028

#include <header.h>

int main_bench()
{
	char one[80],two[80];
	gets(one);
	gets(two);
	int i,a=0;
	for(i=0;one[i]!='\0';i++)
	{	if(one[i]>='A'&&one[i]<='Z') one[i]+=32;
	}	
	for(i=0;two[i]!='\0';i++)	
	{   if(two[i]>='A'&&two[i]<='Z') two[i]+=32;
     }
	if(strcmp(one,two)>0) my_printf(">");
	if(strcmp(one,two)==0) my_printf("=");
	if(strcmp(one,two)<0) my_printf("<");
    gets(one);
	return 0;
}
