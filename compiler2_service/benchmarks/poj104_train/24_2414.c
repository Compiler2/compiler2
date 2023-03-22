#include <header.h>

int main_bench()
{
  char s[20],min[20],max[20];
  char c;
  strcpy(min,"1111111111111111111");
  max[0]='\0';  
  while(1)
    {
        my_scanf("%s",s); 
        if(strlen(min)>strlen(s)) strcpy(min,s);  
        if(strlen(max)<strlen(s)) strcpy(max,s);
        c=getchar();  if(c=='\n') break;
    } 
  my_printf("%s\n",max);
  my_printf("%s\n",min);
}