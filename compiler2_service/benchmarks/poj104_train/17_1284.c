#include <header.h>

int main_bench()
{
	int n,p,i,j,len;
	my_scanf("%d",&n);
	for(p=0;p<n;p++)
	{
	    char a[150];
		my_scanf("%s",a);
        len=strlen(a);
        char b[150];
		for(i=0;a[i]!=0;i++)
		{
		    switch(a[i])
		     {
		            case '(':b[i]='$';
						     break;
					case ')':b[i]='?';
						     break;
					default :b[i]=' ';
		     }
		}
	    for(i=0;i<len;i++)
		{
		    if (b[i]=='?')
			{
			      for (j=i-1;j>=0;j--)
				  {
				        if(b[j]=='$')
						{
						     b[i]=' ';
							 b[j]=' ';
							 break;
						}
				  }
			}
		}
		my_printf("%s",a);
		my_printf("\n");
		for(i=0;i<len;i++)
		my_printf("%c",b[i]);
		my_printf("\n"); 
		
	}
	return 0;
}
