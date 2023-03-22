#include <header.h>

 int main_bench()
{
   char a[5];
   int i, j=0, b[5];
   my_scanf("%s",a);
   int n=strlen(a);
   for (i = n-1; i>=0; i--){
     b[j++] = a[i] - '0';
   }
   for(j=0;j<n;j++){
   my_printf("%d",b[j]);
   }
   return 0;
 }