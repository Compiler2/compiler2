#define NUM_ITER 808588

#include <header.h>

int main_bench()
{
    char string[300];
    
    gets(string);
    char a[200],b[200];
    my_scanf("%s %s", a, b);
   
   char word[200][200];
    int n1,n2,i,k;
    int m=0;
    int p=0;
    n1=strlen(string);
    for(i=0;i<n1;i++)
    {
                     if(string[i]==' ')
                     {
                                     m++;
                                     p=0;
                     }
                     else
                     {
                     word[m][p]=string[i];
                     p++;
                     }
                     
    }
   
    if(strcmp(word[0],a)==0)
    my_printf("%s", b);
    else
    my_printf("%s", word[0]);
    
    for(k=1;k<=m;k++)
    {
                   if(strcmp(word[k],a)==0)
                   my_printf(" %s", b);
                   else
                   my_printf(" %s", word[k]);
    }
  
    return 0;
}
    
    
    
    
    
    

      