#define NUM_ITER 1302775

#include <header.h>

int main_bench()
{
 int i,k;
 char str[100000];
 gets(str);
 k=0;
 for(i=0;i<strlen(str);i++)
 {
  if(str[i]==' ')
   continue;
  else
   {
    k++;
    if(str[i+1]==' ')
    {
     my_printf("%d,",k);
     k=0;
    }
    if(str[i+1]=='\0')
    {
     my_printf("%d\n",k);
    }
    }
  }
}


