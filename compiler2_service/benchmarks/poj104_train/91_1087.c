#define NUM_ITER 1552729

#include <header.h>


int main_bench()
{
	char s[101],c[101];
	int i=0,n;
	gets(s);
	while(s[i]!=0){
		if(s[i+1]==0){
			c[i]=s[i]+s[0];
			c[i+1]=0;
		}
		else
			c[i]=s[i]+s[i+1];
		i++;
	}
	my_printf("%s",c);
	return 0;
}