#define NUM_ITER 31543

#include <header.h>

int main_bench()
{ int n;
   my_scanf("%d",&n);
  int i=0,num=0;
  char s[100];
  while(i<n)
  {my_scanf("%s",&s);
   num+=strlen(s);
   if(num==strlen(s))
   {my_printf("%s",s);
   num++;}
   else if(num<80)
   {my_printf(" %s",s);
    num++;}
    else if(num==80)
    {my_printf(" %s\n",s);
     num=0;}
   else if(num>80)
   {my_printf("\n%s",s);
     num=strlen(s);
     num++;}
      i++;
  }
     return 0;
}