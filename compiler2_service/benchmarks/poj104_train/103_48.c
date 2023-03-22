#define NUM_ITER 1367924

#include <header.h>

main_bench()
{
   char p[1001],i=0,count=1;
   int l;
   my_scanf("%s",p);
   l=strlen(p);
   while(1)
        {
           if(l==1)
              {
              if(p[0]>='A'&&p[0]<='Z')
                   my_printf("(%c,%d)",p[0],count);
                else
                  my_printf("(%c,%d)",p[0]-'a'+'A',count);
                break;
              }  
           else if(p[i]==p[i+1]||(p[i]-p[i+1]=='a'-'A')||(p[i]-p[i+1]=='A'-'a'))       
               {
               count++;
               i++;
               }  
           else
              {
                if(p[i]>='A'&&p[i]<='Z')
                   my_printf("(%c,%d)",p[i],count);
                else
                  my_printf("(%c,%d)",p[i]-'a'+'A',count);
                i++;
                count=1;         
              } 
           if(i==l)
           break;   
        }  
     
}
