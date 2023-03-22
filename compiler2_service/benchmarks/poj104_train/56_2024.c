#include <header.h>

main_bench()
{
   int i,chang;
   char a[5]={'\0'},b[5]={'\0'};
   my_scanf("%s",a);
   chang=strlen(a);
   for(i=0;i<chang;i++)
   {
   	b[i]=a[chang-i-1];
   }
   for(i=0;i<chang;i++)
   my_printf("%c",b[i]);
}