#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    for( int i=0;i<n;i++ )
    {
         int j;
         int temp[26]={0};
         char ch[1000001];
         my_scanf("%s",ch);
         int len=strlen(ch);
         for( j=0;j<len;j++ )
         {
              temp[ch[j]-97]++;
             
         }
        
         for( j=0;j<len;j++ )
         {
              if( temp[ch[j]-97]==1 )
              {
                  my_printf("%c\n",ch[j]);   
                  break;
              }
              
         }
         if( j==len )
                   my_printf("no\n");
    }    
} 