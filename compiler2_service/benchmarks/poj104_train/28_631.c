#include <header.h>

int main_bench()
{
    char s[1000];
    int j=0,i=0,n,k;
    gets(s);
    n=strlen(s);
    while(i<n)
    {
    	if(s[i]!=' ')
    		{j=j+1;
    		 i=i+1;}
    	else if(j!=0)
                  {my_printf("%d,",j);
    		  k=j;
    		  j=0;
    		  i++;}
              else i++;
    }
    my_printf("%d",j);
}
   