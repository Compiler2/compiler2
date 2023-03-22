#define NUM_ITER 1086834

#include <header.h>

int main_bench()
{
	char str[100]; 
	int i,n=0,t,m=0; 
	gets(str); 
	n=strlen(str); 
	for(i=n-1;i>=0;i=i-1) 
	{
		if(str[i]!=' ')
		{
			m=m+1;
		} 
		else
		{
			for(t=i+1;t<i+1+m;t++)
				my_printf("%c",str[t]); 
			m=0;
			my_printf(" "); 
		}
	}
	for(t=i+1;t<i+1+m;t++)
		my_printf("%c",str[t]); 
	return 0;
}

