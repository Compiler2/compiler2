#define NUM_ITER 956802

#include <header.h>

int main_bench()
{
	char str1[257],str2[257],str3[257];
	int i;
	int b,c;
	char *p;
	
	
	my_scanf("%s%s%s",str1,str2,str3);
	
	b=strlen(str2);
	
	p=strstr(str1,str2);
	
	if(p)
		
	{
		for(i=0;str1+i<p;i++)
		{
			my_printf("%c",str1[i]);
		}
		my_printf("%s",str3);
		
		p=p+b;
		
		my_printf("%s",p);
		
	}

	else
		my_printf("%s",str1);
}