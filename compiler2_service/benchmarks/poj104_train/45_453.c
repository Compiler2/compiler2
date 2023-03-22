#include <header.h>

int main_bench()
{
	int i,j,athena,zeus;
	char a[50],b[50],*pa,*pb; 
	my_scanf("%s %s",a,b);
	pa=a;pb=b;
    athena=0;
    for(i=0;i<strlen(b)&&athena!=1;i++,pb++)
	{
		
		if(*pb==*pa)
		{zeus=0;
		for(j=i;j<i+strlen(a);j++,pa++,pb++)
			{
				if(*pb!=*pa)zeus=1;
			}
		    if(zeus==0)athena=1;
			pa=a;pb=&b[i];
		}
		if(athena)
			my_printf("%d",i);
	}
}