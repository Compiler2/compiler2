#include <header.h>

int main_bench()
{
    char s[500];
    char c;
    char e;
    int d;
    int i,j,k,p;
    gets(s);
    int m=strlen(s);
    for(k=2;k<=m;k++)
    {
                    for(i=0;i<=(m-k);i++)
                    {
                                               for(j=i;j<(i+(k)/2);j++)
                                               {
                                                                   d=0;
                                                                   if(s[j]!=s[k+i-1-(j-i)])
                                                                   {
                                                                                     d=1;
                                                                                     break;
                                                                   }
                                               }
                                               if(d==0)
                                               {
                                                       my_printf("\n");
                                                       for(p=i;p<i+k;p++)
                                                       {
                                                                         my_printf("%c",s[p]);
                                                       }
                                               }
                    }
    }
     return 0;
}
