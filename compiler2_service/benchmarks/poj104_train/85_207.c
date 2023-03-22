#define NUM_ITER 30416

#include <header.h>


int main_bench()
{
	char s[20];
	int n,i,j,k=0;
	my_scanf("%d",&n);
    for(j=0;j<n;j++)
	{
		my_scanf("%s",s);
		k=0;
		for(i=0;s[i]!='\0';i++)
		{
			
			if(!((s[i]=='_')||(s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')||(s[i]>='0'&&s[i]<='9')))
				k++;
            else if(!(s[0]=='_'||(s[0]<='z'&&s[0]>='a')||(s[0]<='Z'&&s[0]>='A')))

				k++;
		   
	    
	
		}	
		if(k>0)
			my_printf("no\n");
		else
		    my_printf("yes\n");
	}   
			
	return 0;
}