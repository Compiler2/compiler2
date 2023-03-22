#define NUM_ITER 33320

#include <header.h>


int main_bench()
{
	int n,i,j,len;
	char word[33];
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		my_scanf("%s",word);
		len=strlen(word);
		if(word[len-1]=='r')
		{
			for(i=0;i<len-2;i++)
				my_printf("%c",word[i]);
		}
		else if(word[len-1]=='y')
		{
			for(i=0;i<len-2;i++)
				my_printf("%c",word[i]);
		}
		else 
		{
			for(i=0;i<len-3;i++)
				my_printf("%c",word[i]);
		}
		my_printf("\n");
	}
	return 0;
}