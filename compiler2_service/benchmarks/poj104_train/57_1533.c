#define NUM_ITER 31788

#include <header.h>

int main_bench()
{
    char a[20],*p;
    int n,i,l;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	my_scanf("%s",a);
    	p=a;
    	l=strlen(a)-1;
    	if(*(p+l)=='r')
    	{
    		if(*(p+l-1)=='e')
    		{
    		*(p+l)='\0';
    		*(p+l-1)='\0';
    		}
    	}
    	else if(*(p+l)=='g')
    	{
    		if(*(p+l-1)=='n')
    		{
    			if(*(p+l-2)=='i')
    			{
    				 *(p+l)='\0';
    		         *(p+l-1)='\0';
    		         *(p+l-2)='\0';
    			}

    		}
    	}
    	else if(*(p+l)=='y')
    	{
    		if(*(p+l-1)=='l')
    		*(p+l)='\0';
    		*(p+l-1)='\0';
    	}
    	my_printf("%s\n",p);
    }
    return 0;
}