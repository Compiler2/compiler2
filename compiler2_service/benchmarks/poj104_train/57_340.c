#include <header.h>

int main_bench()
{
    int n,l,i;
    char s[1000];
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      my_scanf("%s",s);
      l=strlen(s);
      s[l]='\0';
      if(s[l-1]=='r'&&s[l-2]=='e')
      s[l-2]='\0';
      else if(s[l-1]=='y'&&s[l-2]=='l')s[l-2]='\0';
      else s[l-3]='\0';
      my_printf("%s\n",s);
      }
      getchar();
      getchar();
}
