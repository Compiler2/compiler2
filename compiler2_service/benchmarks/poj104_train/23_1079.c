#include <header.h>

int main_bench()
{
	char s[101];
	int i,l,j;
	gets(s);
	l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
    		for(j=i+1;;j++)
		    {
    			if(j>=l||s[j]==' ')break;
		    	my_printf("%c",s[j]);
		    }
			my_printf(" ");
		}
		else if(i==0)
			for(j=0;;j++)
		    	{
    				if(j>=l||s[j]==' ')break;
					my_printf("%c",s[j]);
		    	}
	}
	my_printf("\n");
}