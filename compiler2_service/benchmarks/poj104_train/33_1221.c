#define NUM_ITER 30496

#include <header.h>

int main_bench()
{
   int n,i,j;
   char s[300];
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
      my_scanf("%s",s);
      for(j=0;j<300;j++){
         if(s[j]=='\0'){
            my_printf("\n");
            break;
         }
         if(s[j]=='A'){
            my_printf("T");
         }
         if(s[j]=='T'){
            my_printf("A");
         }
         if(s[j]=='C'){
            my_printf("G");
         }
         if(s[j]=='G'){
            my_printf("C");
         }
      }
   }
   return 0;
}