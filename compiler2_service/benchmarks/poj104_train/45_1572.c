#define NUM_ITER 387857

#include <header.h>

int main_bench()
{
   char s1[50],s2[50];
   int i,length,j=0;
   my_scanf("%s",s1);
   my_scanf("%s",s2);
   length=strlen(s1);
   for(i=0;i<length;)
      {
       if(s1[i]!=s2[j])  {i=0;j++;}       
       else  {i++;j++;}
       }
   my_printf("%d",j-length);
}