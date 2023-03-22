#define NUM_ITER 1033389

#include <header.h>

int main_bench()
{
	char words[2001];
	int start,end,max,min,i,len,zmax,zmin,maxstart,minstart;
	zmax=0;
	zmin=100;
	gets(words);
	len=strlen(words);
	for(i=0;i<len;i++)
	{
		while(words[i]==' ') i++;
		start=i;
		while(words[i]!='\0'&&words[i]!=' ') i++;
		end=i;
		max=end-start;
		min=end-start;
		if(max>zmax)
		{
			zmax=max;
			maxstart=start;
		}
		if(min<zmin)
		{
			zmin=min;
			minstart=start;
		}
	}
	while(words[maxstart]!='\0'&&words[maxstart]!=' ')
	{
		my_printf("%c",words[maxstart]);
		maxstart++;
	}
	my_printf("\n");
	while(words[minstart]!='\0'&&words[minstart]!=' ')
	{
		my_printf("%c",words[minstart]);
		minstart++;
	}
	my_printf("\n");
	return 0;
}

