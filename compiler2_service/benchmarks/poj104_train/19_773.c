#define NUM_ITER 685968

#include <header.h>

int main_bench()
{
	char word[200],x[200],y[200];
	int i,j,len=0,t[200]={0};
	char c;
	gets(word);
	my_scanf("%s%s",x,y);
	for(i=0;i<strlen(word);i++)
	{
		if ((i == 0) || word[i-1] == ' ')
		for(j=0;j<strlen(x);j++)
		{
			if(word[i+j]!=x[j])
				break;
			else if ((j==strlen(x)-1) && (word[i+j+1] ==' ' || word[i+j+1] == '\0'))
			{
			   t[i]=1;	
			}
		}
	}
	for(i=0;i<strlen(word);i++)
	{
		if(t[i]==0)
		{
			my_printf("%c",word[i]);
		}
		else
		{
			my_printf("%s",y);
			i=i+strlen(x)-1;
		}
	}
}