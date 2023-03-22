#include <header.h>

int main_bench()
{
    int i,j,n;
    char s[21],x[99];              
    my_scanf("%d",&n);             
    for (i=0;i<n;i++)
	{    
        my_scanf("%s",&s);          
        for(j=0;s[j];j++) 
		{ 
            if(!((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0)))
			{
				x[i]=0;
                break;
			}
			else
				x[i]=1;
        }
	}
        

		for (i=0;i<n;i++)
		{
			if(x[i]==0)
			my_printf("no\n");
			if(x[i]==1)
			my_printf("yes\n");
		}   
    return 0;
}
