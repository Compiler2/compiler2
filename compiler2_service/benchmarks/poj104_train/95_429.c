#define NUM_ITER 944913

#include <header.h>

int main_bench()
{
	char strf[80],strs[80];
	int lf,ls,i;
	gets(strf);gets(strs);
	lf=(int)(strlen)(strf);
	ls=(int)(strlen)(strs);
	for(i=0;i<lf;i++)
	{
		if((strf[i]>='A')&&(strf[i]<='Z'))
		{
			strf[i]=strf[i]-'A'+'a';
		}
	}
    for(i=0;i<ls;i++)
	{
		if((strs[i]>='A')&&(strs[i]<='Z'))
		{
			strs[i]=strs[i]-'A'+'a';
		}
	}
	
	
	if (strcmp(strf,strs)<0)
	{
		my_printf("<");
	}
	else if (strcmp(strf,strs)>0)
	{
		my_printf(">");
	}
    else if (strcmp(strf,strs)==0)
	{
		my_printf("=");
	}
	return 0;
}

