#define NUM_ITER 137230

#include <header.h>

int main_bench()
{
   char *a;
   int i,n=0,j=0,*b;
   a=(char*)malloc(30*sizeof(char));
   b=(int*)malloc(30*sizeof(int));
   for(i=0;i<30;i++)
   {*(a+i)='\0';*(b+i)='\0';my_scanf("%c",a+i);}
   
   for(i=0;*(a+i)!='\0';i++)
	{   if(*(a+i)<':'&&*(a+i)>'/') 
	 my_printf("%c",*(a+i));
            if(*(a+i)>=':'||*(a+i)<='/'&&*(a+i+1)<':'&&*(a+i+1)>'/')
                  my_printf("\n"); 
             }




}