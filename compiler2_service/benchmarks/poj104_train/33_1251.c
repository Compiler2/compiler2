#include <header.h>

int main_bench()
{
   char a[1000][255];
   int m,i,k,j;
   my_scanf("%d",&m);
   for(i=0;i<m;i++)
   {
       my_scanf("%s",a[i]);
   }
   for(j=0;j<m;j++)
   {
       for(k=0;k<255;k++)
       {
           if(a[j][k]=='A')
           my_printf("T");
           else if(a[j][k]=='T')
           my_printf("A");
           else if(a[j][k]=='C')
           my_printf("G");
           else if(a[j][k]=='G')
           my_printf("C");
       }
       my_printf("\n");
   }
   return 0;
}
