#define NUM_ITER 1417250

#include <header.h>

int main_bench()
{
char string[10000];
int i,num=0,word=0,a[300];
char c;
gets(string);
for (i=0;(c=string[i])!='\0';i++)
   if (c==' ') word=0;
   else {
	        if (word==0)
				 {
	           word=1;
	           num=num+1;
           	   a[num-1]=0;
				 }
           a[num-1]++;
   }
for (i=0;i<num-1;i++)
my_printf("%d,",a[i]);
my_printf("%d",a[num-1]);
}