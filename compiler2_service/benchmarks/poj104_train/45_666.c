#define NUM_ITER 1028983

#include <header.h>

int main_bench()
{
    char s[51],w[51];
    int l,m,i,j;
    my_scanf("%s%s",s,w);
    l=strlen(s);
    m=strlen(w);
    for(i=0;i<=m-l;i++)
    	{ 	
    		if(w[i]==s[0])
    			{
    				for(j=0;j<l;j++)
    					{
    					if(w[i+j]!=s[j])
    					break;	
    					}	
    				if(j==l)
    				{
    					my_printf("%d",i);
    					break;
    				}
    			}
    		
    	}
    
}