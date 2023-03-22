#include <header.h>

int main_bench()
{
    char n[105]; 
	int m[105];
	int s[105];
    int i,a;
    my_scanf("%s",n);
	
    for(i=0;n[i]!='\0';i++)
    {
        s[i]=n[i]-'0';
    }
	a=s[0];
	if(strlen(n)==1)
	{
		m[0]=0;
		a=s[0];
	}
	else{
	    for(i=0;i<(strlen(n)-1);i++)
		{
	        m[i]=(10*a+s[i+1])/13;
		    a=(10*a+s[i+1])%13;
		}
	}
	if(strlen(n)==1)
	{
		my_printf("%d",m[0]);
	}
	else{
	for(i=0;i<strlen(n)-1;i++)
	{
		if(i==0)
		{
			if(m[i]!=0)
			{
		        my_printf("%d",m[i]);
			}
			else 
			{
				if(strlen(n)==2)
					my_printf("%d",m[i]);
				else
				continue;
			}
		}
		if(i!=0)
			my_printf("%d",m[i]);
	}
	}
	my_printf("\n%d",a);
        return 0;
}
