#include <header.h>

int main_bench()
{   
	int judge=0;
	char *a,*b,*c;
    a=(char *)malloc(30);
	b=(char *)malloc(39);
	c=b;
	my_scanf("%s",a);
	my_scanf("%s",b);
	if(strlen(b)!=strlen(a))   my_printf("NO\n");
	else
	{
		 for(;*a;a++)
		{
		 for(b=c,judge=0;*b;b++)
		 
			if(*a==*b)  {judge=1;*b=' ';break;}
		 
         if(judge==1)    continue;
		 if (judge==0)    {my_printf("NO\n");break;}
		}
         if (judge==1)    my_printf("YES\n");
	}		
	return 0;
}
