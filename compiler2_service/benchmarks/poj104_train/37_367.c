#include <header.h>


int main_bench()
{
    int i,n;
    char str[100010],*p, ans ;
    int c[26]={0};
    
    
    my_scanf("%d", &n);
    while (n--)
    {
          memset(c,0,sizeof(c));
          my_scanf("%s", str);
          ans = '@';
          for (p = str; *p; p++)
              c[*p - 'a']++;
          for (p = str; *p; p++)
              if (c[*p - 'a'] == 1) 
              {
               ans = *p;
               break;
               }
          if (ans == '@') my_printf("no\n");
          else my_printf("%c\n", ans);
    }
    return 0;
}
