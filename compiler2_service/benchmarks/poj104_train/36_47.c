#include <header.h>

int main_bench()
{
  char a[500],b[500];
  int i;
  for(i=0;i<=499;i++)
  {
    a[i]='\0';
    b[i]='\0';
  }
  my_scanf("%s %s",a,b);
  if(strlen(a)==strlen(b))
  {
    int j;
    for(i=0;a[i]!='\0';i++)
    {
      for(j=0;j<500;j++)
        {
          if(a[i]==b[j])
          {
            b[j]='\0';
            break;
           }
         }
     }
   if(strlen(b)==0)
   my_printf("YES");
   else my_printf("NO");
  }
  else my_printf("NO");
return 0;
}