#define NUM_ITER 1321151

#include <header.h>

int main_bench()
{
   char ch[200],s[200];
   int m,i,j=0,word=0;
   gets(ch);
   m=strlen(ch);
   for(i=0;i<m;i++)
   {
      if(ch[i]!=' ')
      {
         s[j]=ch[i];
         j++;
         word=1;	
      }	
     else if(word==1)
      {
          word=0;
          s[j]=ch[i];
          j++;	
      }
   }
   puts(s);
   return 0;
}