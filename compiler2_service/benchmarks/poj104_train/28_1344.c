#define NUM_ITER 1549701

#include <header.h>

int main_bench()
{
	char s[100000];
	int i,l=0,word=0;
	gets(s);
	if(s[0]!=' ') 
	{
		l=1;
		word=1;
	}
	for(i=1;s[i]!='\0';i++)
	  if(s[i]==' ') 
	  {
	  	if(s[i-1]!=' ') my_printf("%d,",l);
	   word=0;
	   l=0;
      }
	  else if(word==0)
	   {
	   	word=1;
	   	l++;
	   }
      else if(word==1)
	   l++;
   my_printf("%d",l);
}