#define NUM_ITER 1520206

#include <header.h>

int main_bench()
{
	char string[3000];   
	int i,j=0,length=0,b[300];
	char c;       
	gets(string);
	for (i=0;((c=string[i])!='\0');i++)
	{
		if (c!=' ')            
			length=length+1;
		else if ((c==' ')&& (string[i+1]!=' ')) 
		{
			b[j]=length;
				j=j+1;   
			length=0;    
		}        
	}
	b[j]=length;
	for (i=0;i<j;i++)
	{
		if (b[i]!=0)   
		my_printf("%d,",b[i]);
	}
my_printf("%d",b[j]);
}

