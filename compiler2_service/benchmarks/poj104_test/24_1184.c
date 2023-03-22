#include <header.h>

int main_bench()
{
   int i, y, z;
   char m[100], max[100],min[100];
   my_scanf("%s",m);
   y=z=strlen(m);
   strcpy(min,m);
   strcpy(max,m);
   for(i=1;i<50;i++)
   {
      my_scanf(" %s",m);
      if(y<strlen(m)){
          strcpy(max,m);
		  y=strlen(m);
      }
      if(z>strlen(m)){
          strcpy(min,m);
		  z=strlen(m);
      }
   }
   my_printf("%s\n%s",max,min);
   return 0;
}