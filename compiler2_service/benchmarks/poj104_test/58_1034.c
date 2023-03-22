#define NUM_ITER 549

#include <header.h>

int main_bench()
{
    char num[10];
    gets(num);
    int len=strlen(num),n=num[0]-'0';
    for(int v=1;v<len;v++)
    {
         n=n*10+num[v]-'0';   
    }
    for(int u=0;u<n;u++)
    {
       char s[81];
       gets(s);
       if((s[0]=='_')
       ||((s[0]>='a')&&(s[0]<='z'))
       ||((s[0]>='A')&&(s[0]<='Z')))  
       {
           int i=1;
           for(i=1;i<strlen(s);i++)
           {
               if((s[i]=='_')
               ||((s[i]>='a')&&(s[i]<='z'))
               ||((s[i]>='A')&&(s[i]<='Z'))
               ||((s[i]>='0')&&(s[i]<='9')))
                 continue;
               else
               {
                   my_printf("0\n");
                   break; 
               }     
           }
           if(i==strlen(s)) my_printf("1\n");
                                      
       }   
       else my_printf("0\n");
    }
    getchar();
    getchar();
      
}
