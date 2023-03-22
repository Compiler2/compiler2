#define NUM_ITER 1011764

#include <header.h>

int main_bench()
{
   int i;
   char *p;
   char c1,c2;
   p=(char*)calloc(30,sizeof(char));
   gets(p);
   for(i=0;*(p+i)!='\0';i++)
   {  c1=*(p+i);
   c2=*(p+i+1);
      if(c1>47&c1<58)
      {my_printf("%c",c1);
      if(c2<48||c2>57)
      my_printf("\n");
      } 
      }              
}