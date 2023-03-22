#include <header.h>

int main_bench()
{
    int l,i,j,k;
    char str[31];
    gets(str);
    l=strlen(str);
    if(str[0]-'0'>=0&&str[0]-'0'<=9)
        {
            my_printf("%c",str[0]);
            for(k=1;;k++)
            {
              if(str[k]-'0'>=0&&str[k]-'0'<=9)
              my_printf("%c",str[k]);
              else
              break;
            }
            my_printf("\n");
        }
    for(i=0;i<l-1;i++)
    {
        if((str[i]-'0'>9||str[i]<'0')&&str[i+1]-'0'<=9&&str[i+1]-'0'>=0)
        {
           for(j=i+1;;j++)
           {
              if(str[j]-'0'<=9&&str[j]-'0'>=0) 
              my_printf("%c",str[j]);
              else if(str[j]==' ')
              break;
              else
              break;
           }
           my_printf("\n");
        }
    }
    getchar();
    getchar();
}