#define NUM_ITER 29906

#include <header.h>

int main_bench()

{
	int n,i,len=0;
	char word[20];
    my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   my_scanf("%s", word);
	   len=len+1+strlen(word);
	   if(i==0)
	   {
		   my_printf("%s",word);
	   
	   }
	   else 
	   {
		   if(len<=81)
		   my_printf(" %s",word);
	        else
			{
		   my_printf("\n");
		   my_printf("%s",word);
		   len=strlen(word)+1;
			}
	  }
	}
	return 0;
}