#define NUM_ITER 1172299

#include <header.h>

int main_bench()
{
	char str[300];int a[300];
	gets(str);
	int i;
	for(i=0;i<strlen(str);i++) 
	{
		a[i]=str[i];
		
	}
			for(i=0;i<strlen(str);i++) 
	       if(a[i]>=48&&a[i]<=57)
		{
			
		my_printf("%c",str[i]);
		
		if(1-(a[i+1]<=57&&a[i+1]>=48))
			my_printf("\n");
		}

}  