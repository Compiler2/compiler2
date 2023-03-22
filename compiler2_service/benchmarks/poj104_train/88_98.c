#include <header.h>

int main_bench()
{
int x=0;
char a[35];
gets(a);
for (int i=0;a[i]!='\0';i++)
   if (a[i]>='0'&&a[i]<='9')
     {
     my_printf("%d",a[i]-'0');
     for (int j=1;;j++)
        if (a[i+j]>='0'&&a[i+j]<='9')
          my_printf("%d",a[i+j]-'0');
        else {i=i+j-1;my_printf("\n");break;}
     }
}
