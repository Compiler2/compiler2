#define NUM_ITER 1113107

#include <header.h>

int main_bench()
{
    char a[101],b[101];
    int len1,len2,i,j=1;
    gets(a);
    len1=strlen(a);
    b[0]=a[0];
    for(i=1;i<len1;i++)
    {
      if(a[i]!=' ')
      {
         b[j]=a[i];
         j++;  
      }
      else if(a[i]==' '&&a[i+1]!=' ')
      {
         b[j]=a[i];
         b[j+1]=a[i+1];
         ++i;
         j+=2;
      }  
    }
    b[j]='\0';
    len2=strlen(b);
    for(i=0;i<len2;i++)
    {my_printf("%c",b[i]);}
                             
                
}
