#include <header.h>


char str[10000];

int main_bench()
{
	int i,n,word,temp,start;
	gets(str);
	n=strlen(str);
	word=0;
	temp=0;
	start=0;
	for(i=0;i<n;i++)
	{
		if(str[i]!=' ')
		{
			word++;
			temp=0;
		}
		else if(temp==0)
		{
			if(start==0)
			{
				my_printf("%d",word);
				start++;
			}
			else my_printf(",%d",word);
			word=0;
			temp=1;
		}
	}
	if(start==0)
			my_printf("%d",word);
	else my_printf(",%d",word);	

	return 0;
}