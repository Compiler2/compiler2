#define NUM_ITER 849366

#include <header.h>

int main_bench()
{
    char s[100],a[100],b[100],t[100][100];
    int k=0,y=0;
    gets(s);
    gets(a);
    gets(b);
    for(int i=0;s[i]!='\0';i++)
    {
         if(s[i]==' ')
         {
             t[k][i]='\0';
             k++;
             y=i+1; 
          }
          else
            t[k][i-y]=s[i];
     }
     for(int j=0;j<=k;j++)
     {
          if(strcmp(t[j],a)==0)
                strcpy(t[j],b);
      }
     for(int x=0;x<k;x++)
         my_printf("%s ",t[x]);
     my_printf("%s",t[k]);
     return 0;
}
         