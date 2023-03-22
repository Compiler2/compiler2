#define NUM_ITER 1319262

#include <header.h>

int main_bench()
{
	char str[3000];
	gets(str);
	int i,len,j=0;
	len=strlen(str);
      for(i=0;i<len;i++)
	  {
         	if(str[i]!=' ') j++;
			else { if(j!=0) {my_printf("%d",j); if(i<len-1) my_printf(",");j=0;}}
			
	  }
	  j=0;
	   for(i=0;i<len;i++)
	  {
         	if(str[i]!=' ') j++;
			else j=0;
	  }
	   my_printf("%d\n",j);
}