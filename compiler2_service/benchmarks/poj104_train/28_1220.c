#define NUM_ITER 1220254

#include <header.h>

main_bench()
{
   char str[100000];
   int a[300]={0};
   int i,j,k;
   gets(str);
   i=0;
   for(j=0;str[j]!='\0';j++)
      {
         if(str[j]!=' ')
         a[i]++;
         if(str[j]==' '&&str[j+1]!=' '&&str[j+1]!='\0')
         i++;
      }
   for(k=0;k<i;k++)
   my_printf("%d,",a[k]);
   my_printf("%d",a[i]);
}