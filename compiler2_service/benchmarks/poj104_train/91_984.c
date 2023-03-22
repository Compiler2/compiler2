#include <header.h>

int main_bench()
{
 int i;
 char ch[101],*p;
 p=ch;
 i=0;
 while(my_scanf("%c",&ch[i])&&ch[i]!='\n')
  i++; 
 while(i>1)
 {
  my_printf("%c",*p+*(p+1));
  p++;
  i--;
 }
 my_printf("%c\n",*p+ch[0]);
 return 0;
}




