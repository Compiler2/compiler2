#define NUM_ITER 1359223

#include <header.h>

int main_bench()
{
    int n,i,j,l[200],jud=0;
    char s[200][85],str[5]; 
    gets(str);
    n=atoi(str);
    for(i=0;i<n;i++)
    {
       gets(s[i]);
    }
    for(i=0;i<n;i++)
    {
       jud=0;
      l[i]=strlen(s[i]);
      if(s[i][0]!='_')
      {
         if(s[i][0]<'A')
         {
         my_printf("0\n");
          jud=1;
         continue;
         }  
          if((s[i][0]<'a')&&(s[i][0]>'Z'))
         {
         my_printf("0\n");
          jud=1;
         continue;
         }         
         if(s[i][0]>'z')
         {
         my_printf("0\n");
          jud=1;
         continue;
         }
      }
      for(j=1;j<l[i];j++)
      {
        if(s[i][j]!='_')
      {
         if(s[i][j]<'0')
         {
         my_printf("0\n");
          jud=1;
          break;
         }  
         if((s[i][j]>'9')&&(s[i][j]<'A'))
          {
         my_printf("0\n");
          jud=1;
          break;
         }  
          if((s[i][j]<'a')&&(s[i][j]>'Z'))
         {
         my_printf("0\n");
          jud=1;
          break;
         }         
         if(s[i][j]>'z')
         {
         my_printf("0\n");
          jud=1;
          break;
         }
      }
      }
      if(jud == 0)
      my_printf("1\n");
    }
    getchar();
    getchar();
}
