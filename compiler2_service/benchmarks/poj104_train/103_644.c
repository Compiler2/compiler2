#define NUM_ITER 1391389

#include <header.h>


main_bench()
{
      char ch,c[1001];
      int a,len,i;
      my_scanf("%s",c);
      len=strlen(c);
      if(c[0]>='a'&&c[0]<='z')
               ch='A'+c[0]-'a';
      else
               ch=c[0];
      a=1;
      for(i=1;i<=len-1;i++)
      {  if(c[i]-ch==0||c[i]-ch=='a'-'A')
            a++;
         else
           {
             my_printf("(%c,%d)",ch,a);
            if(c[i]>='a'&&c[i]<='z')
               ch='A'+c[i]-'a';
            else
               ch=c[i];
            a=1;
           }
      }
      my_printf("(%c,%d)",ch,a);
     
} 