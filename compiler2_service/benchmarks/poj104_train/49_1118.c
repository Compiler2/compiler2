#define NUM_ITER 866508

#include <header.h>

int main_bench()
{
  char str1[500];
  int i,j,n,x=0,t;
  gets(str1);
  for (n=2;n<=strlen(str1);n++)
   {
     for (i=0;i<strlen(str1);i++)
      { 
       if((i+n)>strlen(str1)) break;                          
       for (j=i;j<=i+n-1;j++)
         {
           if(str1[j]==str1[i+i+n-1-j]) x=x+1;
          }
       if(x==n) 
         {
          for(t=i;t<i+n;t++) my_printf("%c",str1[t]);
          my_printf("\n");
          }
       x=0;
       }
     }
 
  return 0;
}
       