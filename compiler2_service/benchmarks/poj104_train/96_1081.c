#define NUM_ITER 453452

#include <header.h>

int main_bench()
{
  	char s[100];
  	int i,j=0,a=0,b;
  	for(b=0;b<100;b++)
  	{
  		s[b]='\0';
  	}
  	my_scanf("%s",s);
  	for(i=0;s[i]!='\0';i++)
  	{
    	a=a*10+s[i]-'0';
    	if(j!=0||a/13!=0)
    	{
      		s[j]='0'+a/13;
      		a=a%13;
      		j++;
    	}
  	}
  	s[j]=0;
  	if(j!=0) 
  		my_printf("%s\n%d",s,a);
  	else 
		my_printf("0\n%d",a);
}