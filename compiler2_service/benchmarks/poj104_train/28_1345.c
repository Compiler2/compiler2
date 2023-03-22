#include <header.h>

int main_bench()
{
   char str[300][10],c;
   int num[300],n,i;
   my_scanf("%s",str[0]);
   num[0]=strlen(str[0]);
   for(i=1;c=getchar()!='\n';i++)
   {
      my_scanf("%s",str[i]);
      num[i]=strlen(str[i]);
    }
    n=i;
    my_printf("%d",num[0]);
    for(i=1;i<n;i++)
    {
      my_printf(",%d",num[i]);
     }
}
