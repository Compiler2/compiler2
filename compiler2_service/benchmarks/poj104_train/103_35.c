#define NUM_ITER 1330613

#include <header.h>

main_bench()
{  
   char s[1010];
   my_scanf("%s",s);
   char x;
   int c=1;
   int l=strlen(s);
   int i;
   for(i=0;i<l;i++)
   {
      if('a'<=s[i]&&s[i]<='z')   s[i]=s[i]-'a'+'A';                  
   }
   for(i=0;i<l-1;i++)
   {
      x=s[i];
      if(s[i]==s[i+1]&&i==l-2)  {c++;my_printf("(%c,%d)",x,c);}
      if(s[i]==s[i+1]) c++;
      else {my_printf("(%c,%d)",x,c);c=1;}               
   }
   if(s[l-2]!=s[l-1])  my_printf("(%c,1)",s[l-1]);
}