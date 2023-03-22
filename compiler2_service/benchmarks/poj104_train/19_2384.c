#include <header.h>


int main_bench()
{
    char s[100];
    char words[100][100];
    char ti[100],bt[100];
    int i, j, k, n;
    int a[200];
    gets(s);
    my_scanf("%s",ti);
    my_scanf("%s",bt);
    n = 0; k = 0;
    for (i = 0; s[i] != 0; i++) {
        if (s[i] == ' ') {
            s[i] = '\0';
            strcpy(words[n], (s + k));
            n++;
            k = i + 1;
        }
    }
    strcpy(words[n], (s + k));
    n++;
    for(i=0;i<n;i++)
    {
       if(strcmp(ti,words[i])==0)
       {
           strcpy(words[i],bt);
           }

     }

     for(i=0;i<n;i++)
     {
       if(i==0)
       my_printf("%s",words[0]);
       else
       my_printf(" %s",words[i]) ;
     }

     return 0;
     }